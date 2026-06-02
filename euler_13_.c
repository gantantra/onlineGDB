/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE * fp = fopen("gan.txt","r");
    int ch=getc(fp),a[100][50],i,j,b[55],s,k=-1,c=0;
    
    for(i=0;i<100;i++)
        for(j=0;j<50;j++)
        {
            a[i][j]=ch-48;
            ch=getc(fp);
            
            if(ch==10)
                ch=getc(fp);
        }    
        
    for(j=49;j>=0;j--)
    {
        s=0;
        for(i=0;i<100;i++)
          s=s+a[i][j];
        b[++k]=(c+s)%10;
          c=(c+s)/10;
    }
    b[++k]=c;
    
    s=0;    
    for(i=k;i>k-10;i--)
        printf("%d",b[i]);
        
    return 0;
}
