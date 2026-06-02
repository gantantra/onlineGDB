#include <bits/stdc++.h>
using namespace std;

int s(int n,int *arr)
{
    int count1,count2,count3;
    count1=count2=count3=n;
    
    if(n<=1)
       return 0;
    if(arr[n]!=0)
       return arr[n];
    else
    {
       count1=s(n-1,arr)+1;
           
       if(n%2==0)
           count2=s(n/2,arr)+1;
           
       if(n%3==0)
           count3=s(n/3,arr)+1;
    }
    
    int output=min(count1,min(count2,count3));
    arr[n]=output;
    return output;
}

int main()
{
    int arr[1000000];
    for(int i=0;i<8;i++)
      arr[i]=0;
      
    cout<<s(26665,arr);
}
