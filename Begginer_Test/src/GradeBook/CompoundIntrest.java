package GradeBook;

import java.util.Scanner;

public class CompoundIntrest {
	public void Intrest() {
		Scanner input = new Scanner(System.in);
		System.out.println("\n Enter Amount for CI");
		int p= input.nextInt();
		System.out.println("\n Enter Rate for CI");
		Double r =input.nextDouble()/100;
		System.out.println("\n Enter Time Period ");
		int t = input.nextInt();
		for (int j = 1; j <= t; j++) {
			Double amt = p*Math.pow(1.0 + r	, j);
			System.out.println("\n Amount after Year"+j+"is :"+amt);						
		}
		
	}
	
	public static void main(String[] args) {
		CompoundIntrest myCompoundIntrest = new CompoundIntrest();
        myCompoundIntrest.Intrest();		
	}

		
	}
	