import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Flower[] flowers = new Flower[4];
	    Scanner sc = new Scanner (System.in);
	    
	    for(int i=0;i<4;i++)
	    {
		    int flowerId = sc.nextInt();
		    sc.nextLine();
		    String flowerName = sc.nextLine();
		    int price = sc.nextInt();
		    int rating = sc.nextInt();
		    sc.nextLine();
		    String type = sc.nextLine();
		
		    flowers[i] = new Flower(flowerId,flowerName,price,rating,type);
	    }
	    String search = sc.nextLine();
	    
	    Flower obj =  findMinPriceByType(flowers,search);
	  
	    if(obj.getType()=="")
	        System.out.println("There is no flower with given type");
	    else 
	        System.out.println(obj.getFlowerId());
	        
	}
	
	public static Flower findMinPriceByType(Flower[] flowers,String search)
	{
	    Flower flow = new Flower(0,"",0,0,""); 
	    
	    
	    int min=flowers[0].getPrice();
	    for(int i=0;i<flowers.length;i++)
	        if(flowers[i].getType().equalsIgnoreCase(search)&&flowers[i].getRating()>3&&flowers[i].getPrice()<min)
	        {
	            min = flowers[i].getPrice();
	            flow = flowers[i];
	        }   
	   return flow;     
	}
}

class Flower
{
    private int flowerId,rating,price;
    private String flowerName, type;
    
    Flower(int flowerId, String flowerName, int price, int rating, String type)
    {
        this.flowerId = flowerId;
        this.flowerName = flowerName;
        this.price = price;
        this.rating = rating;
        this.type = type;
    }
    public String getType()
    {
        return this.type;
    }
    public int getPrice()
    {
        return this.price;
    }  
    public int getFlowerId()
    {
        return this.flowerId;
    }
    public int getRating()
    {
        return this.rating;
    }
}

