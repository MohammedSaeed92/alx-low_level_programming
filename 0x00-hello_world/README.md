**Some scripts and what they do**
* 0-preprocessor : take the file stored in the variable CFILE and run it through the preprocessor and save the result into another file
* 1-compiler : take the file stored in the variable CFILE and run it throught Compile only; do not assemble or link. and save the result into .o file
* 2-assembler : take the file stored in the variable CFILE and generate assimbly file; do not link. and save the result into .s file
* 3-name : take the file stored in the variable CFILE and gereate an executable c file
* 4-puts.c : print a string with puts function