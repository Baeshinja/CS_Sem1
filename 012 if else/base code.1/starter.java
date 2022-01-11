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
		System.out.println("Great job! You guessed correctly.");
	}
	else 
	{
		System.out.println("HAH what a loser. Try again");
	
	}
	
		
		
		
		
		
		
		
		
		 
	}
}
