#include<stdio.h>
#include"lib.h"
void factorial ()
{
        int a, b;
        int sum = 1;
    
        printf("Input a number : ");
        scanf("%d", &b);
    
        for (a = 1; a <= b; ++a)
                    sum *= a;
        
        printf("%d!=%d\n",b,sum);
}
