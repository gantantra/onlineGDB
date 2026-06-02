#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n,int m)
{
    int v[n-1];
    
    for(int i=1;i<n;i++)
       v[i-1]=arr[i];
    for(int i=0;i<n-1;i++)
       arr[(i+m)%(n-1)+1]=v[i];
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n],m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    
    rotate(arr,n,m);
    
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}




