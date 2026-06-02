#include<bits/stdc++.h>
using namespace std;

void Marge(int arr[],int start,int mid,int end)
{
    int arr2[1000];
    int ptr1=start,ptr2=mid+1,k=start;
    
    while(ptr1<=mid && ptr2<=end)
        if(arr[ptr1]<arr[ptr2])
            arr2[k++]=arr[ptr1++];
        else
            arr2[k++]=arr[ptr2++];
            
    while(ptr1<=mid)
        arr2[k++]=arr[ptr1++];
    
    while(ptr2<=end)
        arr2[k++]=arr[ptr2++];

    for(int i=0;i<k;i++)
      arr[i]=arr2[i];
}

void Margesort(int arr[],int n,int m)
{
    if(n>=m)
    return;
    int mid=(n+m)/2;
    Margesort(arr,n,mid);
    Margesort(arr,mid+1,m);
    Marge(arr,n,mid,m);
    
}

int main()
{
    int arr[]={14,27,33,35,10,44};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    Margesort(arr,0,size-1);
    
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
}