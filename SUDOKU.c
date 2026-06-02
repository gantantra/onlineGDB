#include<stdio.h>

int S[9][9],Z[10],n=0;

void row(int m)
{
    int i=m/10,j;

    for(j=0;j<9;j++)
       if(S[i][j]!=0)
	 Z[S[i][j]]=1;
}

void column(int m)
{
    int j=m%10,i;

    for(i=0;i<9;i++)
       if(S[i][j]!=0)
	Z[S[i][j]]=1;
}

void grid(int m)
{
    int i=m/10,j=m%10;
    int A=i-i%3,B=j-j%3;


    for(i=A;i<A+3;i++)
      for(j=B;j<B+3;j++)
	 if(S[i][j]!=0)
	   Z[S[i][j]]=1;
}

void fill(int m)
{
    int i,flag=0,j;

    for(i=1;i<=9;i++)
       Z[i]=0;

    row(m);
    column(m);
    grid(m);


    for(i=1;i<=9;i++)
      if(Z[i]==0)
      {
	      flag++;
	      j=i;
      }

    if(flag==1)
    {
       S[m/10][m%10]=j;
       n--;
    }
}

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
     for(j=0;j<9;j++)
	  if(S[i][j]==0)
	     fill(i*10+j);
    }

    printf("\n\nSolved sudoku\n\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
	       printf("%d ",S[i][j]);
       printf("\n");
    }
    return 0;
}