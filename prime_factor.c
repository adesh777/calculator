#include<stdio.h>
#include"lib.h"
void prime_factorization ()
{
        int n; 
         printf("Input a number : "); 
         scanf("%d",&n); 
       
         if(n < 2)
                    return; 
       
        
        int p = 2; 
        int primes[20]; 
        int index = 0; 
        int i; 
        
        while (1 != n){ 
                if (0 == (n%p)){ 
                        n = n/p; 
                        primes[index] = p; 
                        ++index; 
                        p = 2; 
                } else {
                    ++p;
                }
        } 
        
        if(1 == index){
                printf("Prime number\n"); 
        } else { 
                for (i = 0; i < index - 1; ++i)
                        printf("%d*", primes[i]);

                printf("%d\n", primes[i]);
          }  
        
          return;    
        
}
