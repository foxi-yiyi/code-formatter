#include <stdio.h>
#include <stdlib.h>
#include "reg-exp.h"
#include <errno.h>

int main()
{
    regExp("ab(df*|g+(h?))");
    return 0;
}