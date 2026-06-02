#include<stdio.h>

int S[9][9],Z[10],Y[10],n=0;

void zero()
{
    int i;
    for(i=1;i<=9;i++)
    {
       Z[i]=0;
       Y[i]=0;
    }   
}

void row(int m)
{
    int i=m=8,j,k=0,l=0,flag;
    zero();
    
    for(j=0;j<9;j++)
        if(S[i][j]!=0)
          Z[S[i][j]]=1;
        else
          Y[++l]=j;
    
    for(i=1;i<=9;i++)
      if(Z[i]==0)
         Z[++k]=i;    
    if(k==l)
    printf("fefe");
         
    for(i=1;i<=k;i++);
}

void column(int m);
void grid(int m);

int main()
{
    FILE *f = fopen("gant.txt", "r");
    int i,j,ch = getc(f);

    for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	{
	    if(ch==10)
	       ch = getc(f);

	    S[i][j]=ch-48;
	    ch = getc(f);
	}
	
	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	  if(S[i][j]==0)
	    n++;

    while(n>0)
    {
	  for(i=0;i<9;i++)
	  {   
	    row(i);
	    column(i);
	    grid(i);
	  }    
    }

   /* printf("\n\nSolved sudoku\n\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
	   printf("%d ",S[i][j]);
       printf("\n");
    }*/
    return 0;
}