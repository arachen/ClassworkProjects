// Student Name: Stephanie A****g
// Submission Date: 25 March 2015
// Assignment: HW4 Random Number Generator

package hw4;

import java.util.Scanner;
import java.util.Random;

// class containing random number generator and powerball generator
public class randNum {

	// generates a random number between the range min and max
	public int numGen(int min, int max) {
		Random rand = new Random();
		
		int randNum = rand.nextInt((max - min) + 1) + min;
		
		return randNum;
	}
	
	// generates the powerball, a random number between 1 and 40
	public int powerBall() {
		int powerballNum = (int) (Math.random() * 40) + 1;
		
		return powerballNum;
	}
}

// class to contain main method
class runGame {
	public static void main(String[] args) {
		int[] randNums;
		int minRange;
		int maxRange;
		int nums;
		char ans;
		
		// create new objects for Scanner and randNum
		Scanner input = new Scanner(System.in);
		randNum numObj = new randNum();
		randNum pBall = new randNum();
		
		while (true) {	
			// asks user for range of values minRange and maxRange
			System.out.print("What is the range of values you want to use for "
					+ "random numbers? (eg enter 1 54 to generate numbers between "
					+ "1 and 54) ");
			minRange = input.nextInt();
			maxRange = input.nextInt();
			
			// asks user how many numbers to generate between 1 and 10. if number is outside of this range, error is thrown
			// and user is prompted to enter correct numbers. 
			System.out.print("How many random numbers do you want to generate? (Must be between 1 and 10) ");
			nums = input.nextInt();
			
			while (nums <= 0 || nums > 10) {
				System.out.print("Please enter a number between 1 and 10: ");
				nums = input.nextInt();
			}
			
			// if number is within range, program continues
			while (nums > 0 && nums <= 10) {
				// dynamically allocate array with size nums
				randNums = new int[nums];
				
				// populate array with random numbers generated from method call numGen()
				for (int i = 0; i < nums; i++) {
					randNums[i] = numObj.numGen(minRange, maxRange);
				}
				
				// prints random numbers using enhanced for loop
				System.out.println("The random numbers are: ");
				for (int i : randNums) {
					System.out.println(i);
				}
				
				// prints powerball number
				System.out.println("And the powerball is " + pBall.powerBall());
				
				// prompts user to play again or quit. if user answers yes, program starts again. if user answers no,
				// program exits with no errors.
				System.out.print("Do you want to play again? (Y for yes, N for no) ");
				ans = input.next().charAt(0);
				
				if (ans == 'n' || ans == 'N') {
					System.out.println("Thank you for playing!");
					System.exit(0);
				}
				while (ans != 'n' && ans != 'N' && ans != 'y' && ans != 'Y') {
					System.out.println("Incorrect input, please try again.");
					System.out.print("Do you want to play again? (Y for yes, N for no) ");
					ans = input.next().charAt(0);
				}
			}
			
			// closes input when program is complete
			input.close();
		}
	}
}
