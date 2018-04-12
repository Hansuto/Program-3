/*
COP3402
Spring 2018
McAlpin
-----------
Chris Perkins    - ch289391
Chris Taliaferro - ch119541
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexical.c"
#include "parser.c"
#include "vm.c"

int main(int argc, char* argv[])
{
    int i;
    int lexerFlag = 0, parserFlag = 0, vmFlag = 0;
    char inputFile[10];

    strcpy(inputFile, argv[0]); 

    for(i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-l") == 0)
            lexerFlag = 1;
        else if(strcmp(argv[i], "-a") == 0)
            parserFlag = 1;
        else if(strcmp(argv[i], "-v") == 0)
            vmFlag = 1;
    }

    if (lexerFlag)
        lexer(inputFile);
    if (parserFlag)
        parser(inputFile);
    if (vmFlag)
        vm(inputFile);

    return 0;
}