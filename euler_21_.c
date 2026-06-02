/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k=220,s=0;
    j=k;
    for(i=2;i<j;i++)
        if(k%i==0)
        {
          s=(i==k/i)?s+i:s+i+k/i;
          j=k/i;
        }
    printf("%d",s+1);
    return 0;
}
