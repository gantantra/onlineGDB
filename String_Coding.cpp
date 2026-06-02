/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
	int count=0;
	string s,r;
	char t;
	cin >> s;

    t=s[0];
    r.push_back(s[0]);
    
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==t)
		  count++;
		else
		{
		    string st = to_string(count);
			r+=st;
			count=1;
			r.push_back(s[i]);
			t=s[i];
		}     
	}
	string st = to_string(count);
			r+=st;
    cout << r << endl;
}

