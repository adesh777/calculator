#include<stdio.h>
#include"lib.h"

void sub ()
{
        int a, b;
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}
