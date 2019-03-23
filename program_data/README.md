# Program data
```
CppProgramData           -- 52,000 .cpp  programs from PKU datasets, organised in 104 classes
JavaProgramData		 -- 52,000 .java programs from PKU datasets converted from the above
github_cpp_program_data  --  4,932 .cpp  programs crawled from Github organised in 50 classes, 
			     after removing clones
github_java_program_data --  4,732 .java programs crawled from Github organised in 50 classes, 
			     after removing clones
```
# Experiment bash scripts
```
./train.sh               ## train models using the datasets
./test.sh                ## test performance on models of the latest epochs in the training processes
./transfer-learning.sh   ## transfer cross-language learning model to problem of more classes
./test2.sh               ## test performance on the latest epochs of transferred learning models
./tensorboard.sh         ## visualise training progresses in tensorboards
```

## GGNN datasets generated from the program data on Oct 18, 2018, v29
```
cpp_babi_format_Oct-15-2018-0000029               -- GGNN graphs of PKU datasets in C++
java_babi_format_Oct-15-2018-0000029		  -- GGNN graphs of PKU datasets in Java
cll_java_babi_format_Oct-15-2018-0000029          -- after aligning node types between C++ and Java
github_cpp_babi_format_Oct-15-2018-0000029	  -- GGNN graphs of Github datasets in C++
github_java_babi_format_Oct-15-2018-0000029	  -- GGNN graphs of Github datasets in Java
cll_github_java_babi_format_Oct-15-2018-0000029   -- after aligning node types between C++ and Java
```

