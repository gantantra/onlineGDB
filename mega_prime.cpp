#include <bits/stdc++.h>
using namespace std;

int prime(long n)
{
    int m=0;
    if(n==1)
      return 0;   
      
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
           return 0;
    return 1;  
}

int main()
{
    long first,last; 
    int count=0;
    
    cout<<"enter the range";
    cin>>first>>last;
    
    for(long i=first;i<=last;i++)
    {
            int flag=0;
            string str=to_string(i);
            
            for(int i=str.size()-1;i>=0;i--)
                if(str[i]!='2'&&str[i]!='3'&&str[i]!='5'&&str[i]!='7') 
                {
                    flag=1;
                    break; 
                }
                
            if(flag==0)
             if(prime(i))
               count++;  
    }
    cout<<count;
}

