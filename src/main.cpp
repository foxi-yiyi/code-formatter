#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

extern "C"
{
    #include "reg-exp.h"
    #include "syntax.h"
    #include "lexer.h"
    #include "formatter.h"
}

int main()
{
    system("chcp 65001");
    //regExp("a|b");
    char regexp[1024];
    char source[1024];
    printf("RegExp> ");
    scanf("%s", regexp);
    printf("Source> ");
    scanf("%s", source);
    clock_t end, start = clock();
    RegExp* regex = regExp(regexp, REG_F_NONE);
    end = clock();
    printf("Compiled in %fms\n", (double)(end - start) / CLOCKS_PER_SEC / 1000.0);
    start = clock();
    char* result = regExpMatch(regex, source, 1);
    end = clock();
    printf("Matched in %fms\n", (double)(end - start) / CLOCKS_PER_SEC / 1000.0);
    if(result)
        printf("Match: %s\n", result);
    else
        printf("Match: null\n");
    return 0;
}