/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    for(int i=0;i<str.size()-1;i++)
    {
        for(int j=0;j<str.size()-i;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp = str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<str;
}
