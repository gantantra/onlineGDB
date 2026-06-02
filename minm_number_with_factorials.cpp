/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    
    for(i=5;1;i++)
    {
        int sum=0,a=1;
        
        while(i>=pow(5,a))
            sum+=i/pow(5,a++);
        
        if(sum==n)
           break;
    }
    cout<<i;
}
