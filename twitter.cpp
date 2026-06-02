#include <bits/stdc++.h>
using namespace std;

vector<string>times(vector<string>v,int m)
{
    int n=v.size(),k=0;
    int ID[n],SI[n],SO[n];
    
    for(int i=0;i<n;i++)
    {
        string s=""; int j;
        for(j=0;v[i][j]!=' ';j++)
            s.push_back(v[i][j]);
        
        int flag=0,b;
        for(int a=0;a<k;i++)
            if(ID[a]==stoi(s))
            {
                b=a;
                flag=1;
                break;
            }
        if(flag==0)
        {
            b=k;
            ID[k++]=stoi(s);
        }
        
        s="";
        for(j=j+1;v[i][j]!=' ';j++)
            s.push_back(v[i][j]);
        
        if(v[i].substr(j+1,v[i].size()-1)=="sign-in")
            SI[b]=stoi(s);
        else 
            SO[b]=stoi(s);
    }
    
    vector<string>vec;
    for(int i=0;i<k;i++)
       if(SO[i]-SI[i]>m)
         vec.push_back(to_string(ID[i]));
        
    return vec;      
}

int main()
{
    vector<string>v,s;
    int k;
    
    for(int i=1;i<=3;i++)
    {
        string str;
        getline(cin,str);
        
        v.push_back(str);
    }
    cin>>k;
    
    s=times(v,k);
    
    for(int i=0;i<s.size();i++)
       cout<<s[i]<<" ";
}
