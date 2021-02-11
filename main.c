#include<stdio.h>
#include"lib.h"

int main (void)
{
        int s;
        void (*fptr)(void);
         while(1) {
           printf("\n 1) Addition ");
           printf("\n 2) Substraction ");
           printf("\n 3) Multiplication ");
           printf("\n 4) Division ");
           printf("\n 5) sqr ");
           printf("\n 6) Prime Factorization");
           printf("\n 7) Factorial ");
           printf("\n 8) Exit \n");
           printf("\n Please Enter Key :");
           scanf("%d",&s);
        
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;
        case 6:
                fptr = prime_factorization;
                break;
        case 7:
                fptr = factorial;
                break;        
        case 8:
               return 0;
        default:
               printf("\n Please correct Key ");
                
        }
    
        fptr();
    }     
}


