package oops;

public class Bank {
	//instance variables, states of an object, properties of an object, fields
	//data members
	private int accNumber;
	private String accName;
	private double balance;
	
	//Constructors
	//default constructor
	public Bank() {
		this(0,"",0);
	}
	//Constructor overloading or parameterized constructor
	public Bank(int accNo, String accName, double initialDeposit) {
		this.accNumber = accNo;
		this.accName = accName;
		this.balance = initialDeposit;
	}
	public boolean deposit(int amount) {
		if (amount % 100 == 0) {
			this.balance += amount;
			return true;
		}
		return false;
	}
	byte withdraw(int amount) {
		if (amount % 100 == 0) {
			if (this.balance >= amount) {
				this.balance -= amount;
				//transaction successful!
				return 0; 
			}
			//Insufficient fund
			return -1;
		}
		//not multiples of 100
		return 1;
	}
	public double getBalance() {
		return this.balance;
	}
	@Override
	public String toString() {
		return "Bank[accNumber="+this.accNumber +", accName='" + this.accName +
				 "', balance = " + this.balance + "]";
	}
}
