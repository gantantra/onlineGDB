/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=6,b,c=0,i,j;     //january 1,1900  means 6th jan 1901 was sunday(a)
    for(i=1;i<=100;i++)
    {   
        for(j=1;j<=12;j++)
        {
          if(a<1)
            a=a+7;
          
          if(a==1)
           c++;
            
          if(j==9||j==4||j==6||j==11)
            a=a-2;
          else if(j==2&&i%4==0)
            a--;
          else if(j==2&&i%4!=0);  
          else
            a=a-3;
        }
    }
    printf("\n%d",c);
    return 0;
}



