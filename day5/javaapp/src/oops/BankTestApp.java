package oops;

import java.util.Scanner;

public class BankTestApp {
	public static void mainMenu() {
		System.out.println("Banking Transaction Demo");
		System.out.println("************************");
		System.out.println("1. Create Account");
		System.out.println("2. Deposit");
		System.out.println("3. Withdraw");
		System.out.println("4. Show Balance");
		System.out.println("5. Exit");
		System.out.println("Enter your choice : ");		
	}
	public static int getAmount(Scanner in) {
		System.out.print("Enter amount : ");
		int amount = in.nextInt();
		return amount;
	}
	public static void main(String[] args) {
//		Bank app =  null;
//		Scanner in = new Scanner(System.in);
//		int choice;
//		while(true) {
//			mainMenu();
//			choice = in.nextInt();
//			switch(choice) {
//			case 1:{
//				int accNo;
//				String accName;
//				double initialAmount;
//				System.out.print("Account Number : ");
//				accNo  = in.nextInt();
//				System.out.print("Account Name : ");
//				accName = in.next();
//				System.out.print("Initial Deposit : ");
//				initialAmount = in.nextDouble();
//				app = new Bank(accNo, accName, initialAmount);
//			}
//			break;
//			case 2:
//				if (app.deposit(getAmount(in))) {					
//					System.out.println("Deposited!");
//					System.out.println("Current Balance : " + app.getBalance());
//				}
//				else
//					System.out.println("Amount should be multiples of 100");
//				break;
//			case 3:
//			{
//				int result = app.withdraw(getAmount(in));
//				if(result == 0) {
//					System.out.println("Withdrew!");
//					System.out.println("Current Balance : " + app.getBalance());					
//				}
//				else if (result == 1)
//					System.out.println("Amount should be multiples of 100");
//				else
//					System.out.println("Insufficient fund!");
//			}
//			break;
//			case 4:
//				System.out.println("Current Balance : " + app.getBalance());
//				break;
//			default:
//				System.out.println("Thank you so much for banking with us!");
//				System.exit(0);
//			}
//			
//		}
		Bank app = new Bank(1002, "Vaibhav", 90000);
//		String str = ""+app;
		System.out.println(app);
//		System.out.println(str);
	}

}
