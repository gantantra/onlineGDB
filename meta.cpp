
#include <iostream>
using namespace std;

int A[26]={0};
            
char MO(string str)                             
{
    int j,i;
    for(i=0;str[i]!='\0';i++)
        if(str[i]<='Z')
            A[str[i]-'A']++;                
        else                      
            A[str[i]-'a']++;        
    
    int max=0;
    for(i=0;i<26;i++)                             
        if(max<A[i])                                   
        {
            max=A[i];
            j=i;
        }    

    return j+'A';        
}

int main()
{
    string str;
    getline(cin,str);
    
   cout<<MO(str);
}    
    
    