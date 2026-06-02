/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
    int a[297],i,j,k=0,c,b,s=0;
    
    a[k]=1;
    for(i=1;i<=1000;i++)
    {   
        c=0;
        for(j=0;j<=k;j++)
        {
           b=(2*a[j]+c);    
           a[j]=b%10;
           c=b/10;
        }
        if(c>0)
          a[++k]=c%10;
    }
    
    for(i=k;i>=0;i--)
      s=s+a[i];
    printf("%d",s);
    return 0;
}
