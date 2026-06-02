
#include <bits/stdc++.h>
using namespace std;

string str;

void reverse(int i,int j)
{
    char temp;
    while(i<j)
    {
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        
        i++;j--;
    }
}

int main()
{
    getline(cin,str);
    
    for(int i=0;;i++)
    {
        int j=i;
        while(str[i]!=' ' && str[i]!='\0')
            i++;
            
        if(str[i]=='\0') break;
        
        reverse(j,i-1);
    }
    cout<<str;
}
