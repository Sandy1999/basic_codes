package GradeBook;

import java.util.Scanner;

import javax.swing.JOptionPane;

public class GradeBook {
	private String  coursename,insname;
	public void setCoursename(String name) {
		coursename = name;
	}
	public String getCoursename() {
		return coursename;
	}
	public void displaymessage() {
		System.out.println("Welcome to grade book for \n "+getCoursename());
	}
	
	public void determineclassaverage() {
		Scanner input = new Scanner(System.in);
		int total,gradecounter,grade;
		double average;
		total=0;
       gradecounter=0;
       System.out.println("Enter grade or -1 to exit :");
       grade = input.nextInt();
      while(grade != -1){
    	  total+=grade;
    	  gradecounter++;
      }
      if (gradecounter != 0) {
    	  average = (double)total/gradecounter;	
    	  System.out.println("Average for "+gradecounter+" subjects is :"+average);
	  } 
      else
    System.out.println("\n No grades were entered ");
	
	}
   
}
