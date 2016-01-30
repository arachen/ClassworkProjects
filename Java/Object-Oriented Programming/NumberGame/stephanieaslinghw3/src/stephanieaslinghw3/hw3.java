// Stephanie Asling
// 25 February 2015
// HW3: Number Game

package stephanieaslinghw3;

// program uses class Scanner
import java.util.Scanner;

public class hw3 
{
	// starting number for game
	private int userNum;
	
	// method to set the starting number
	public void setuserNum(int num)
	{
		// store the starting number
		userNum = num;
	}
	
	// method to retrieve the starting number
	public int getuserNum()
	{
		return userNum;
	}
	
	// method to add the digits of the user's number
	public int addDigits(int num)
	{
		int ans = num % 9;
		if (ans == 0)
		{
			if (num > 0)
				return 9;
		}
		
		return ans;
	}
	
	// method to give the user instructions and ask for the user's final 4+ digit number
	public void runGame()
	{
		Scanner input = new Scanner(System.in);
		Scanner enter = new Scanner(System.in);
		
		// gives user instructions and asks for their final number
		System.out.print("Write down a four digit number (for example 8673) and press enter when ready.");
		enter.nextLine();
		System.out.print("Rearrange the digits in any manner (eg 7386) and press enter when ready.");
		enter.nextLine();
		System.out.print("Manually subtract the smallest number from largest (eg 8673 - 7386 = 1287) and press enter when ready.");
		enter.nextLine();
		System.out.print("Circle any number other than zero, it is already a circle (eg you may want to circle 2). Keep the circle number "
				+ "as a secret for me to guess later. Press enter when ready.");
		enter.nextLine();
		System.out.print("Type out all the numbers other than the one you circled, then press enter: ");
		int number = input.nextInt();
		
		// uses set() method to set startNum as the number they have given
		setuserNum(number);
		
		//System.out.print(getstartNum());
	}
	
	// method to do all the fancy crazy math shit
	
	
	public static void main(String[] args)
	{
		Scanner reader = new Scanner(System.in);
		
		// instantiates game1 of numGame()
		hw3 game1 = new hw3();
		
		// boolean value to determine if user wants to play again
		int runAgain = 1;
		
		// calls runGame() method to give user instructions and
		// set the starting number
		while (runAgain == 1)
		{
			game1.runGame();
		
			// gets sum of all digits given by user
			// if the sum is less than 9, subtracts the sum from 9
			// and sets it as final number.
			// if the sum is 9, sets 9 as the final number.
			// if the sum is greater than 9, adds the digits.
			// if the sum is still greater than 9, keeps adding
			// until the digit sum is a single number, then 
			// subtracts from 9 and sets as final number.
			int tempnum = game1.addDigits(game1.getuserNum());
		
			while (tempnum > 9)
			{
				game1.addDigits(tempnum);
			}
		
			if (tempnum < 9)
			{
				game1.setuserNum(9 - tempnum);
			}
		
			else if (tempnum == 9)
			{
				game1.setuserNum(9);
			}
		
			System.out.printf("The numer you circled was %d.\n", game1.getuserNum());
			
			// asks user if they would like to play again, exits program if they do not want to
			System.out.print("Enter y to continue or anything else to quit: ");
			char ans = reader.next().charAt(0);
			
			if (ans == 'y')
			{
				runAgain = 1;
			}
			
			else
			{
				runAgain = 0;
			}
		}
		
		System.out.println("Thank you for playing!");
		System.exit(0);
	}
}