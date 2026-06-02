#include <bits/stdc++.h>
using namespace std;

string rmv(int i,string st)
{
    string str=st;
    str[i]=' ';
    
    string s;
    for(int i=0;i<str.size();i++)
      if(str[i]!=' ')
        s.push_back(str[i]);
    
    return s;    
}

void stri(string st,string str)
{
    if(str.size()==1)
      cout<<st+str<<endl;
    else
    {  
       for(int i=0;i<str.size();i++)
       {
           string s=rmv(i,str);
          stri(st+to_string(str[i]),s);
       }
    }
}

int main()
{
    stri("","abcd");
}
