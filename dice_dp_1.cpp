#include <bits/stdc++.h>
using namespace std;

int dp(int n,int arr[])
{
    if(n==0||n==1)
        return 1;
    else if(arr[n]>0)
        return arr[n];
    else
    {
        arr[n]=2*dp(n-1,arr);    
        return arr[n];
    }    
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n+1]={0};
     cout<<dp(n,arr);
}
