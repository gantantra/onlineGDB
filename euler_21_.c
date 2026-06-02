#include<stdio.h>

int sum (int n)
{
    int i,k=n,s=0;
    for(i=2;i<k&&i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=((i!=n/i)?i+n/i:i);
            k=n/i;
        }
    }
    return s+1;
}

int main()
{
     int i,s=0;
     for(i=2;i<10000;i++)
     {
         if(i==sum(sum(i))&&i!=sum(i)&&sum(i)<10000)
             s+=i;
     }
     printf("%d ",s);
}

