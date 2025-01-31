package oops;

public class CarRental {
	private int carId;
	private String carType;
	private double rent;
	
	public void getCar(int carId, String carType) {
		this.carId = carId;
		this.carType = carType.toUpperCase();
		this.rent = switch(this.carType) {
		case "SMALL CAR" -> 1000.0;
		case "VAN" -> 800;
		case "SUV" -> 2500;
		default -> 0;
		};
	}
	public double getRent() {
		return this.rent;
	}
	public void showCar() {
		System.out.println("Car ID : " + this.carId);
		System.out.println("Car Type : " + this.carType);
		System.out.println("Car Rent : " + this.rent);
	}
	@Override
	public String toString() {
		return "Car[carId="+this.carId +",CarType='"+this.carType + "',Rent=" +
				this.rent;
	}
}
