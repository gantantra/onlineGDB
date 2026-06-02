/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long a[1000001],max=0,i,j,k;
    
    a[1]=1;
    for(i=1;i<=1000000;i++)
    { 
        j=i,k=1;
        while(j>1)
        {
            if(j%2==0)
                j=j/2;
            else
                j=j*3+1;
            
            if(j<i)
            {  
                k=k+a[j];
                break;
            }    
            else
              k++;
        }
        a[i]=k;
        
        if(max<k)
            max=k;
        //printf("%ld %ld   ",k,i);    
    }
    
    for(i=2;i<1000000;i++)
       if(max==a[i])
          break;
    printf("\n%ld",i);
    return 0;
}

