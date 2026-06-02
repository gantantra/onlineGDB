#include <bits/stdc++.h>
using namespace std;

void P(string str,string s)
{
    if(s.size()==str.size())
    {
        cout<<s<<endl;
        return;
    }         
    else
        for(int i=0;i<str.size();i++)
            if(s.find(str[i])>=s.size()||s.find(str[i])<0)
            {
                string st=s;
                st.push_back(str[i]);
                P(str,st);
            }    
}

int main()
{
    string str;
    cin>>str;
    
    cout<<endl;
    P(str,"");
}

