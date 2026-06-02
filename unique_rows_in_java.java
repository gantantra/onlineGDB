

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc= new Scanner(System.in);
	    int size = sc.nextInt();
	    
	    int arr[][] = new int[size][size];
	    
	    for(int i=0;i<size;i++)
	      for(int j=0;j<size;i++)
	    
	    int count=0;
	    for(int i=0;i<size-1;i++)
	    {
	       int flg=0;
	       for(int j=i+1;j<size;j++)
	       {
	          int flag=0;    
	          for(int k=0;k<size;k++)
	              if(arr[i][k]!=arr[j][k])
                  {
                      flag=1;
                      break;
                  }
              
              if(flag==0)
              {
                  flg=1;
                  break;
              }      
	       }
	       if(flag==0)
           count++;
	    }   
		
		System.out.println(count);
	}
}
