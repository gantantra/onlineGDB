
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],v[100],i=0,a;
    
    while(cin>>a)
        arr[i++]=a;
    
    for(int i=0;i<6;i++)
    {
        if(i==0)
           v[i]= arr[i]*arr[i+1];
        else if(i==5)
           v[i]= arr[i]*arr[i-1];
        else
           v[i]= arr[i-1]*arr[i+1];   
    }
    
    for(int i=0;i<6;i++)
    cout<<v[i]<<" ";
}