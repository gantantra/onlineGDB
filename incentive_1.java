import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Player[] players = new Player[4];
	    Scanner sc = new Scanner (System.in);
	    
	    for(int i=0;i<4;i++)
	    {
		    int id = sc.nextInt();
		    sc.nextLine();
		    String country = sc.nextLine();
		    String side = sc.nextLine();
		    double price = sc.nextDouble();
		
		    players[i] = new Player(id,country, side, price);
	    }
	    sc.nextLine();
	    String search = sc.nextLine();
	    
	    Player[] obj =  searchPlyerForMatch(search, players);
	    
	    int[] arr = new int[obj.length];
	    for(int i=0;i<obj.length;i++)
	        arr[i]=obj[i].getId();
	        
	    Arrays.sort(arr);
	    for(int i=0;i<arr.length;i++)
	        System.out.println(arr[i]);
	}
	
	public static Player[] searchPlyerForMatch(String search, Player[] players)
	{
	    Player[] pl = new Player[4];
	    int k=0;
	    
	    for(int i=0;i<players.length;i++)
	        if(players[i].getSide().equalsIgnoreCase(search))
	            pl[k++] = players[i];
	    
	    return Arrays.copyOfRange(pl, 0, k);        
	}
}

class Player
{
    int id;
    String country, side;
    double price;
    
    Player(int id, String country, String side, double price)
    {
        this.id = id;
        this.country = country;
        this.side = side;
        this.price = price;
    }
    public int getId()
    {
        return this.id;
    }
    public String getSide()
    {
        return this.side;
    }    
}
