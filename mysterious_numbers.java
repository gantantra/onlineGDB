import java.util.*;

public class Main
{
    static int fbn=0,fbnc=1;
    
    public static int fib(int n)
    {
        while(fbn<n||fbnc<n)
        {
            fbn+=fbnc;
            fbnc+=fbn;
        }
        
        if(fbn==n||fbnc==n)
           return 1;
        else 
           return 0;   
    }
    
    public static int prime(int n)
    {
        if(n==1)
          return 0;
          
        for(int i=2;i*i<=n;i++)
          if(n%i==0)
             return 0;
        
        return 1;     
    }
    
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    
	    int n= sc.nextInt();
	    int count=0,i;
	  
	    for(i=1;true;i++)
	      if(fib(i)==0&&prime(i)==0)
	      {
	          count++;
	          System.out.print(i+" ");
	          if(count==n)
	            break;
	      }
	    
	  //System.out.print(i);
	}
}
