/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int prime(long n)
{
    long i,flag=0;
    for(i=2;i<=n/2;i++)
       if(n%i==0)
          flag=1;
    if(flag==0)
     return 1;
    else
    return 0;
}

int main()
{
    long i,j,flag,max=0;
    for(i=2;i<300425737571;i++)
    {
        if(600851475143%i==0)
          if(prime(600851475143/i))
             break;
    }
    
    printf("%ld",600851475143/i);
    return 0;
}
