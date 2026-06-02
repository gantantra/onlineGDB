#include <bits/stdc++.h>
using namespace std;

int m(int n,int arr[])
{
    if(n<=1)
      return 0;
    if(arr[n]!=0)
      return arr[n];

    int output=m(n-1,arr)+m(n-2,arr)+2;
    arr[n]=output;
    return output;
}

int main()
{
    int arr[11];
    for(int i=0;i<11;i++)
      arr[i]=0;
      
    cout<<m(10,arr);
}
