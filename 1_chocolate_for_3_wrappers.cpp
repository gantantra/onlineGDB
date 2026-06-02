#include <iostream>
using namespace std;

int sum(int n)
{
    if(n<3)
        return 0;
    else
       return n/3+sum(n/3+n%3);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<n+sum(n);
}
