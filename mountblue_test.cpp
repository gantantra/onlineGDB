#include <bits/stdc++.h> 

using namespace std;

int fact(int m)
{
    int fct=1,i;
    
    for( i=1;i<=m;i++)
      fct*=i;
      
    return fct;  
}

int maxStrength(int n) 
{
     int v[10000],k=0;
     v[k]=0;
     
     while(n<=1000000&&n>=1)
     {
         int flag=0;
         for(int i=0;i<=k;i++)
         {
             if(n==v[i])
              flag=1;;
         }
         if(flag)
            break;
            
         v[++k]=n;
         
         int fact_sum=0;
         while(n>0)
         {
            fact_sum+=fact(n%10);
            n/=10;
         }
         n=fact_sum;
     }
     
     int max=0;
     for(int i=1;i<=k;i++)
     {
         if(v[i]>max)
           max=v[i];
     }
     
     return max*k;
}


int main()
{
    cout<<maxStrength(5); 
}