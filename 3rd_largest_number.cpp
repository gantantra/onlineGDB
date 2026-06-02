#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,8,3,6,5,9};
    
    int max1=0,max2=0,max3=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<len;i++)
    {
        if(arr[i]>max1)
        {   
            max3=max2;
            max2=max1;
            max1=arr[i];
        }    

        if(arr[i]<max1&&arr[i]>max2)   
        {   
            max3=max2;
            max2=arr[i];
        }
        if(arr[i]<max1&&arr[i]<max2&&arr[i]>max3)   
            max3=arr[i];
    }
    cout<<max3;
}
