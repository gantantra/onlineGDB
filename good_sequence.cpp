#include <bits/stdc++.h>
using namespace std;
 
int count=0,c=0;

int vowel(char c)
{
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')   
        return 1;
    return 0;    
}

void RS(string str)
{
    if(str.size()%2==1&&str.size()>2)
    {
        int flag=0,s=str.size();
        
        for(int i=0;i<s/2;i++)
            if(vowel(str[i]))
                return;
                
        if(vowel(str[s/2])==0)
                return;
        
        for(int i=s/2+1;i<s;i++)
            if(vowel(str[i]))
                return;
               
        if(flag==0)
           c++;
    }
}
 
void printSubsequence(string input, string output)
{
    if (input.empty()) 
    {
        RS(output);
        count++;
        return;
    }
 
    printSubsequence(input.substr(1), output + input[0]);
 
    printSubsequence(input.substr(1), output);
}
 
int main()
{
    string output = "";
    string input;
    cin>>input;
 
    printSubsequence(input, output);
    
    cout<<count-c;
 
    return 0;
}