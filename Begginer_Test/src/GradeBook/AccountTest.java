package GradeBook;

import java.util.Scanner;

import javax.swing.JOptionPane;

public class AccountTest {
	public static void main(String[] agrs) {
		Account account1 = new Account(50.73);
		Account account2 = new Account(-7.25);
		System.out.println("Initial Balance in account 1 \t"+account1.getBalance());
		System.out.println("Initial Balance in account 2 \t"+account2.getBalance());
		String str = JOptionPane.showInputDialog("Enter Amoount to be credited in your account :");
		String message = String.format("Welcome %s to Account section",str);
		JOptionPane.showMessageDialog(null, message);
	}

}
