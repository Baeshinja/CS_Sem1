import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	
	System.out.println("This a number guessing game. Pick an integer between 1 and 1000.");
	Random rand = new Random();
	int x = rand.nextInt(1001);
	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt();

	if(x==a)
	{
		System.out.println("You're right!");
	}
	else 
	{
		System.out.println("You're wrong.");
	}
	if(x<a)
	{
		System.out.println("You're number is larger.");
	}
	if(x>a)
	{
		System.out.println("You're number is smaller.");
	}
		
		
		
		
		
		
		
		
		 
	}
}
