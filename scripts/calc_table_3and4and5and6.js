const fs = require("fs");
const tools = ["blade", "chisel", "cov", "cova", "covf"];

let nowPwd = process.cwd();
if (nowPwd.endsWith("scripts")) {
    process.chdir("../");
}
const fuzzFiles = fs.readdirSync(`${nowPwd}/blade`);
const outputFileDir = `${nowPwd}/scripts_data`;


let withoutNosan = 0;
let hasNosan = 0;
let onlyHasNosan = 0;


let runTimeErrorCounts=0;
let runTimeErrorDetailNullCounts=0;
let runTimeErrorDetailOneCounts=0;
let runTimeErrorDetailMoreCounts=0;

let otherErrorCounts=0;
let otherErrorDetailNullCounts=0;
let otherErrorDetailOneCounts=0;
let otherErrorDetailMoreCounts=0;


class AnalysisInfo {
    static validFuzzers = ["AFL++", "radamsa", "symcc"];
    static validSans = ["ASAN", "LSAN", "MSAN", "NOSAN", "TSAN", "UBSAN"];
    constructor(crash_loc, stacktrace, fuzzers, sans, MAIN_ERROR, ERROR_DETAIL) {
        this.crash_loc = crash_loc;
        this.stacktrace = stacktrace;
        this.fuzzers = fuzzers; 
        this.sans = sans;      
        this.MAIN_ERROR = MAIN_ERROR; 
        this.ERROR_DETAIL = ERROR_DETAIL; 
    }

    static fromLine(line) {
        
        const parts = line.split("\t");

        if (parts.length < 6) {
            throw new Error("Invalid line format. Expected at least 6 parts.");
        }

        const crash_loc = parts[0] || null;
        const stacktrace = parts[1] || null;

        let fuzzers = parts[2] ? parts[2].split(",").map(f => f.trim()).filter(f => f) : [];
        let sans = parts[3] ? parts[3].split(",").map(s => s.trim()).filter(s => s) : [];
        let MAIN_ERROR = parts[4] ? parts[4].split(",").map(e => e.trim()).filter(e => e) : [];
        let ERROR_DETAIL = parts[5] ? parts[5].split(",").map(d => d.trim()).filter(d => d) : [];

        return new AnalysisInfo(crash_loc, stacktrace, fuzzers, sans, MAIN_ERROR, ERROR_DETAIL);
    }
}

//table3
const fuzzerCounts={};
const fuzzerCountsUnique={};
//table4
const sanCountsGlobal = {};
const sanCountsGlobalUnique = {};
const sanCountsTool = {};
//table4
const mainIssueCounts={};
const runTimeErrorDetailIssueCounts={};
const otherErrorDetailIssueCounts={};

tools.forEach(tool => {
    sanCountsTool[tool] = {};
    fuzzFiles.forEach(fuzzFile => {
        const toolDir = `${tool}/${fuzzFile}`;

        if (fs.existsSync(toolDir)) {
            const analysisFilePath = `${toolDir}/analysis`;


            if (fs.existsSync(analysisFilePath)) {
                let analysisInfos = analysisContent(analysisFilePath);
                calc_table3(analysisInfos, tool, fuzzFile);
                calc_table4(analysisInfos, tool, fuzzFile);
                calc_table5and6(analysisInfos, tool, fuzzFile);
            } else {
                console.log(`File ${analysisFilePath} does not exist.`);
            }
        } else {
            console.log(`Directory ${toolDir} does not exist.`);
        }
    });
    out_table3();
    out_table4();
    out_table5and6();
});

console.log("withoutNosan: ", withoutNosan);
console.log("hasNosan: ", hasNosan);
console.log("onlyHasNosan: ", onlyHasNosan);

function analysisContent(analysisFilePath) {
    const content = fs.readFileSync(analysisFilePath, "utf-8");
    const lines = content.split("\n");
    let analysisInfos = [];

    lines.forEach(line => {
        if (line.trim() !== "") {
            const analysisInfo = AnalysisInfo.fromLine(line);
            analysisInfos.push(analysisInfo);
        }
    });
    return analysisInfos;
}

function calc_table3(analysisInfos, tool, fuzzFile){
    analysisInfos.forEach(info => {
        info.fuzzers.forEach(fuzzer => {
            fuzzerCounts[fuzzer] = (fuzzerCounts[fuzzer] || 0) + 1;
        });
        if(info.fuzzers.length == 1){
            fuzzerCountsUnique[info.fuzzers[0]] = (fuzzerCountsUnique[info.fuzzers[0]] || 0) + 1;
        }
    });
}

function calc_table4(analysisInfos, tool, fuzzFile){
    analysisInfos.forEach(info => {
        info.sans.forEach(san => {
            sanCountsGlobal[san] = (sanCountsGlobal[san] || 0) + 1;
            sanCountsTool[tool][san] = (sanCountsTool[tool][san] || 0) + 1;
        });

        if (info.sans.length == 1) {
            sanCountsGlobalUnique[info.sans[0]] = (sanCountsGlobalUnique[info.sans[0]] || 0) + 1;
        }
    });
}


function calc_table5and6(analysisInfos, tool, fuzzFile){
    analysisInfos.forEach(info => {
        // Table 5
        if(info.MAIN_ERROR.length != 0){
            info.MAIN_ERROR.forEach(error => {
                if(!error.includes("CHECK failed: sanitizer_allocator_secondary.h")) 
                    mainIssueCounts[error] = (mainIssueCounts[error] || 0) + 1;
            });
        }
        else {
            if(info.sans.includes("NOSAN")){
                hasNosan += 1;
                if((info.sans[0]=="NOSAN" && info.sans.length == 1)){
                    onlyHasNosan += 1;
                }
                else{
                   // console.log(`fuzzFile: ${fuzzFile}, tool: ${tool}, sans: ${info.sans}`);
                }
            }
            else {
                withoutNosan += 1;
            }
        }
        // Table 6
        if(info.MAIN_ERROR =="runtime error"){
            runTimeErrorCounts += 1;
            if(info.ERROR_DETAIL.length == 0){
                runTimeErrorDetailNullCounts += 1;
            }
            else if(info.ERROR_DETAIL.length == 1){
                runTimeErrorDetailOneCounts += 1;
            }
            else{
                runTimeErrorDetailMoreCounts += 1;
            }
            if(info.ERROR_DETAIL.length != 0){
                info.ERROR_DETAIL.forEach(detail => {
                    runTimeErrorDetailIssueCounts[detail] = (runTimeErrorDetailIssueCounts[detail] || 0) + 1;
                });
            }
        }
        else if(info.MAIN_ERROR=="WRITE memory access" || info.MAIN_ERROR=="READ memory access"){
            otherErrorCounts += 1;
            if(info.ERROR_DETAIL.length == 0){
                otherErrorDetailNullCounts += 1;
            }
            else if(info.ERROR_DETAIL.length == 1){
                otherErrorDetailOneCounts += 1;
            }
            else{
                otherErrorDetailMoreCounts += 1;
            }
            if(info.ERROR_DETAIL.length != 0){
                info.ERROR_DETAIL.forEach(detail => {
                    otherErrorDetailIssueCounts[detail] = (otherErrorDetailIssueCounts[detail] || 0) + 1;
                });
            }
        }
        
    });
}
console.log("runTimeErrorCounts: ", runTimeErrorCounts);
console.log("runTimeErrorDetailNullCounts: ", runTimeErrorDetailNullCounts);
console.log("runTimeErrorDetailOneCounts: ", runTimeErrorDetailOneCounts);
console.log("runTimeErrorDetailMoreCounts: ", runTimeErrorDetailMoreCounts);


console.log("otherErrorCounts: ", otherErrorCounts);
console.log("otherErrorDetailNullCounts: ", otherErrorDetailNullCounts);
console.log("otherErrorDetailOneCounts: ", otherErrorDetailOneCounts);
console.log("otherErrorDetailMoreCounts: ", otherErrorDetailMoreCounts);

function out_table3() {
    console.log("Writing statistics to table3...");
    const outPath = `${outputFileDir}/table3`;
    
    if (!fs.existsSync(outPath)) {
        fs.mkdirSync(outPath, { recursive: true });
    }

    let fuzzerOutputLines = [["Fuzzer", "Count"]];
    for (const fuzzer in fuzzerCounts) {
        fuzzerOutputLines.push([fuzzer, fuzzerCounts[fuzzer]]);
    }

    const fuzzerCSV = fuzzerOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/fuzzerCounts.csv`, fuzzerCSV, "utf-8");

    let uniqueOutputLines = [["Fuzzer", "Unique Count"]];
    for (const fuzzer in fuzzerCountsUnique) {
        uniqueOutputLines.push([fuzzer, fuzzerCountsUnique[fuzzer]]);
    }

    const uniqueCSV = uniqueOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/fuzzerCountsUnique.csv`, uniqueCSV, "utf-8");

}

function out_table4() {
    console.log("Writing statistics to table4...");
    const outPath = `${outputFileDir}/table4`;
    
    if (!fs.existsSync(outPath)) {
        fs.mkdirSync(outPath, { recursive: true });
    }

    const allTools = Object.keys(sanCountsTool);
    
    const allSans = new Set();
    for (const tool in sanCountsTool) {
        for (const san in sanCountsTool[tool]) {
            allSans.add(san);
        }
    }

    const toolOutputLines = [["SAN", ...allTools]]; 

    for (const san of allSans) {
        const row = [san];
        for (const tool of allTools) {
            row.push(sanCountsTool[tool][san] || 0); 
        }
        toolOutputLines.push(row);
    }

    const toolCSV = toolOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/sanCountsTool.csv`, toolCSV, "utf-8");

    let globalOutputLines = [["SAN", "Count"]];
    for (const san in sanCountsGlobal) {
        globalOutputLines.push([san, sanCountsGlobal[san]]);
    }

    const globalCSV = globalOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/sanCountsGlobal.csv`, globalCSV, "utf-8");

    let uniqueOutputLines = [["SAN", "Unique Count"]];
    for (const san in sanCountsGlobalUnique) {
        uniqueOutputLines.push([san, sanCountsGlobalUnique[san]]);
    }

    const uniqueCSV = uniqueOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/sanCountsGlobalUnique.csv`, uniqueCSV, "utf-8");

    console.log(`Statistics written to ${outPath}`);
}

function getDictSum(dict){
    let sum = 0;
    for (const key in dict) {
        sum += dict[key];
    }
    return sum;
}

function out_table5and6() {
    console.log("Writing statistics to table5 and table6...");
    const outPath = `${outputFileDir}/table5and6`;
    
    if (!fs.existsSync(outPath)) {
        fs.mkdirSync(outPath, { recursive: true });
    }

    let mainIssueOutputLines = [["MAIN_ERROR", "Count", "Percentage"]];
    const mainIssueTotalCount = getDictSum(mainIssueCounts);

    let sum = 0;

    for (const error in mainIssueCounts) {
        const percentage = ((mainIssueCounts[error] / mainIssueTotalCount) * 100).toFixed(4) + "%";
        mainIssueOutputLines.push([error, mainIssueCounts[error], percentage]);
        sum  += parseFloat(percentage);
    }
    console.log("sum: ", sum);

    const mainIssueCSV = mainIssueOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/mainIssueCounts.csv`, mainIssueCSV, "utf-8");

    const runTimeErrorDetailTotalCount = runTimeErrorDetailNullCounts + getDictSum(runTimeErrorDetailIssueCounts);
    let runtimeErrorOutputLines = [["ERROR_DETAIL", "Runtime Error Count", "Percentage"]];
    for (const detail in runTimeErrorDetailIssueCounts) {
        const count = runTimeErrorDetailIssueCounts[detail];
        const percentage = ((count / runTimeErrorDetailTotalCount) * 100).toFixed(4) + "%";
        runtimeErrorOutputLines.push([detail, count, percentage]);
    }
    runtimeErrorOutputLines.push(["Others", runTimeErrorDetailNullCounts, ((runTimeErrorDetailNullCounts / runTimeErrorDetailTotalCount) * 100).toFixed(2) + "%"]);

    const runtimeErrorCSV = runtimeErrorOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/runTimeErrorDetailIssueCounts.csv`, runtimeErrorCSV, "utf-8");
    const othersErrorTotalCount = otherErrorDetailNullCounts + getDictSum(otherErrorDetailIssueCounts);
    let othersErrorOutputLines = [["ERROR_DETAIL", "Other Error Count",  "Percentage"]];
    for (const detail in otherErrorDetailIssueCounts) {
        const count = otherErrorDetailIssueCounts[detail];
        const percentage = ((count / othersErrorTotalCount) * 100).toFixed(2) + "%";
        othersErrorOutputLines.push([detail, count, percentage]);
    }
    othersErrorOutputLines.push(["Others", otherErrorDetailNullCounts, ((otherErrorDetailNullCounts / othersErrorTotalCount) * 100).toFixed(2) + "%"]);
    const othersErrorCSV = othersErrorOutputLines.map(row => row.join(",")).join("\n");
    fs.writeFileSync(`${outPath}/otherErrorDetailIssueCounts.csv`, othersErrorCSV, "utf-8");

    console.log(`Statistics written to ${outPath}`);
}
