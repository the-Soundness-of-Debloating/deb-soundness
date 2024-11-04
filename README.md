# Deb-vul-repair
This repo contains all the soundness issues detected after finishing Step 4, together with scripts and data needed for **Step 5 - Soundness Issue Analysis**.

## Repo Structure
```
├── analyse.sh                                      # Script for analysing categorization and distribution for a single debloated program
├── auto_analyse.sh                                 # Automated analysing for all the programs
├── blade
│   ├── bzip2-1.0.5-argv-fuzz
│   │   ├── analysis                               # Categorization results
│   │   ├── argv-fuzz-inl.h
│   │   ├── bzip2-1.0.5.c.origin.c
│   │   ├── bzip2-1.0.5.c.reduced.c
│   │   ├── crash_info                             # Information for soundness distribution chart
│   │   └── crashed_inputs                         # Deduplicated soundness issues
│   │       ├── crash_0:8730;10252;
│   │       │   ├── error_msg                     # Error message for the current issue
│   │       │   ├── id:0000xx, input_x, afl       # Input that triggers the current issue (detected by AFL++)
│   │       │   ├── input_x                       # Input that triggers the current issue (detected by Radamsa)
│   │       │   ├── id:0000xx, input_x, symcc     # Input that triggers the current issue (detected by SymCC)
│   │       │   ├── ......
│   │       │   └── sanitizer_info                # Sanitizers that can detect the current issue
│   │       ├── crash_10:6541;7288;8788;10252;
│   │       └── ......
│   |    ├── deb_lines                             # Information for debloated lines
|   |    └── function_lines                        # Information for function start lines
│   ├── bzip2-1.0.5-input-fuzz
│   └── ......
├── cov
└── ......

```

## How to run analysis

* For analysing a single program(e.g.: `bzip2-1.0.5` debloated by `chisel` and using the `argv-fuzz` seed file), run:
```
bash -x ./analyse.sh chisel/bzip2-1.0.5-argv-fuzz
```
* For analysing all the programs, run:
```
bash -x ./auto_analyse.sh
```

* After completing the above analysis, files named `deb_lines`, `crash_info`, and `analysis` will be generated for each program. Then we can use the scripts in the `scripts` directory for data analysis. The data is in the `scripts_data` folder.

## Notes
* There are some folders in `crashed_inputs` with similar content but different folder names. This is because a single `error_msg` file could contain multiple distinct soundness issues. We extracted each of these issues individually and stored them in separate folders.
* For some soundness issues where their folder name does not include a stack trace, this is because there is no corresponding stack trace found in the `error_msg` provided by sanitizers. In such cases, we used the `pc` value as a standard for deduplication , which may lead to inaccuracies.
