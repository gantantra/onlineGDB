/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int amb(int m)
{
    int k=m,s=0,i;
    for(i=2;i<k&&i<=m/2;i++)
        if(m%i==0)
        {
            s=s+(i!=m/i?i+m/i:i);
            k=m/i;
        }

        return (s+1>m? 1: 0);
}

int sum(int n)
{
    int i,k=n-12;
    for(i=12;i<n-12;i++)
    {
        if(amb(i)&&amb(n-i))
            return 0;
        k=n-i;
    }
    return n;
}


int main()
{
    int i,m,s=23*12;

    for(i=25;i<=28123;i++)
        s=s+sum(i);

    printf("%d",s);

    return 0;
}