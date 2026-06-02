#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    
    vector<int>v;
    if(x<=9)
    {
        cout<<x+10;
        return 0;
    }
    else
        for(int i=9;i>=2;i--)
            for( ;x%i==0;x/=i)
                v.push_back(i);
    
    if(x>10)
    {
        cout<<"no possible number";
        return 0;
    }
    
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]; 
}
