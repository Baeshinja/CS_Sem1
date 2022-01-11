import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		
		
	Random rand = new Random();
	
	
		int rand_num1 = rand.nextInt(10);
		System.out.println(rand_num1);
		
		
		int rand_num2 = rand.nextInt(100) + 1;
		System.out.println(rand_num2);
		
		
		double a;
		a = 0;
		a = rand.nextDouble();
		a = a + 2.5; 
		System.out.println(a);
		
		double b;
		b = 0;
		b = rand.nextDouble();
		b = b + 14;
		System.out.println(b);
		
		
		
		
		
		
		
		
		
	}
}
