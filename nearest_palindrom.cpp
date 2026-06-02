#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,n="1221";
        int m = stoi(n);

        for(int i=m-1;1;i--)                    // m+1 & i++         will give larger nearest
        {
            s = to_string(i);
            
            int flag=0;
            for(int j=0;j<s.size()-j;j++)
                if(s[j]!=s[s.size()-j-1])
                {
                    flag=1;
                    break;
                }  
                
            if(flag==0)
                break;                      
        }
    cout<<s;    
}

