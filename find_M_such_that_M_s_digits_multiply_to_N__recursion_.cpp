#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int a=0;       //to count the time_Complexity

int num (int n,int j)
{
    for(int i=j;i>=2;i--)
    {
        a++;                     //counting the time_Complexity
        if(i==n)
        {
            v.push_back(i);
            return 1;
        }    
        else if(n%i==0&&i!=n)
        {
            if(num(n/i,i))
            {
                v.push_back(i);
                return 1;
            }    
        }        
    }
    return 0;
}

int main()
{
    int n,count=0;
    cin>>n;
    
    if(n<10)
    {
        cout<<n+10;
        return 0;
    }
    
    if(num(n,9)==0)
    {
        cout<<"no number";
        return 0;
    }    
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]; 
        
    cout<<endl<<a;    
}

