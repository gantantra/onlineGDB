/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int plndrm(int m)
{
    int n=m,s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    if(m==s)
      return 1;
    else
      return 0;
}

int main()
{
    int i,j,s,n,m,flag=0;
    
    for(i=999999;i>9999;i--)
    {
       if(plndrm(i))
          for(j=999;j>99;j--)
              if((i/j)*j==i&&((i/j)/1000==0))
              {
                  flag=1;
                  printf("%d %d",i,i/j);
                  break;
              }        
        if(flag==1)
        break;
    }    
             
    return 0;         
}
