/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=3;i>=1;i--)
    {  
        for(int j=3;j>=1;j--)
          for(int k=1;k<=i;k++)
             printf("%d",j);
        printf("\n");
    }

    return 0;
}
