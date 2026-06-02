#include <iostream>
using namespace std;

int main()
{
    string str,st;
    cin>>str>>st;
    
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        int flag=0;
        for(int j=0;st[j]!='\0';j++)
            if(str[i]!=st[j])
            {
                flag=1;
                break;
            } 
            else i++;
        
        if(flag==0)
            count++;
    }
    cout<<count;
}
