/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int s1=0,s2=1,s,p=0;
    
    while(s<4000000)
    {
        s=s1+s2;
        s1=s2;
        s2=s;
        
        if(s%2==0)
        p=p+s;
    }
    printf("%d",p);
    
    return 0;
}

