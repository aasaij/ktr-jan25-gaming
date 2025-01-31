package oops;

public class CarRentalApp {

	public static void main(String[] args) {
		CarRental myCar = new CarRental();
		myCar.getCar(7065, "SUV");
		myCar.showCar();
		System.out.println(myCar);
	}

}
