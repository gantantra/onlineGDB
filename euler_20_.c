#include <stdio.h>

int main()
{
   int a[100000],i,j,k=0,c,b,s=0,d=0;
    
    a[k]=1;
    for(i=2;i<=2000;i++)
    {   
        c=0;
        for(j=0;j<=k;j++)
        {
           b=(i*a[j]+c);    
           a[j]=b%10;
           c=b/10;
        }
        while(c>0)
        {
            a[++k]=c%10;
             c=c/10;
        }
    }
    
    for(i=k;i>=0;i--)
    {
       printf("%d",a[i]);
       s=s+a[i];
    }
    printf("\n%d\n",s);

    return 0;
}






