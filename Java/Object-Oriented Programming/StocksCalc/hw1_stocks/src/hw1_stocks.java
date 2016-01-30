//student name: Stephanie Asling 
//Date: 21 January 2015
//Name of hw: HW#1: profit for stocks 
//due 1-29-2014 (Wed.) at 10:00 am 

import java.util.Scanner;

public class hw1_stocks 
{ //class start

public static void main(String[] args)
{
	int ns;        // Number of shares
	double sp;     // Sale price per share
	double sc;     // Sale commission
	double pp;     // Purchase price per share
	double pc;     // Purchase commission
	double prof;   // Profit from a sale
	Scanner input = new Scanner(System.in);
   
	// Get the number of shares.
	System.out.print("How many shares did you buy and then sell? ");
	ns = input.nextInt();
   
	// Get the purchase price per share.
	System.out.print("What price did you pay for the stock per share? ");
	pp = input.nextDouble();
   
	// Get the purchase commission.
	System.out.print("What was the purchase commission? " );
	pc = input.nextDouble();

	// Get the sale price per share.
	System.out.print("What was the sale price per share? ");
	sp = input.nextDouble();

	// Get the sales commission.
	System.out.print("What was the sales commission? ");
	sc = input.nextDouble();
   
	// Get the profit or loss.
	prof = profit(ns, pp, pc, sp, sc);
	
   
	// Display the result.
	System.out.printf("The profit from this sale of stock is $%.2f\n", prof);
   
	//return 0;
}

// ********************************************************
// The profit function accepts as arguments the number of *
// shares, the purchase price per share, the purchase     *
// commission paid, the sale price per share, and the     *
// sale commission paid. The function returns the profit  *
// (or loss) from the sale of stock as a double.          *
// ********************************************************
public static double profit(double ns, double pp, double pc, double sp, double sc)
{
   return ((ns * sp) - sc) - ((ns * pp) + pc);
}

}
