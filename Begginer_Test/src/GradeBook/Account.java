package GradeBook;

public class Account {
private double balance;
public Account(double initialbalance) {
	// TODO Auto-generated constructor stub
	if (initialbalance>0.0) {
		balance=initialbalance;
		
	}
}
public void credit(double amount) {
	balance+=amount;
}
public double getBalance() {
	return balance;	
}
}
