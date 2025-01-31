package alms;

public class Trainer extends User {
	private String specilization;
	private double salary;
	public Trainer(int userId, String userName, String emailId, String specilization, double salary) {
		super(userId, userName, emailId);
		this.specilization = specilization;		
		this.salary = salary;
	}
	public String getSpecilization() {
		return specilization;
	}
	public void setSpecilization(String specilization) {
		this.specilization = specilization;
	}
	public double getSalary() {
		return salary;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
	@Override
	public String toString() {
//		return "Trainer [specilization=" + specilization + ", salary=" + salary + "]";
		return "Trainer [userID = " + super.getUserId() + ", userName = '" + super.getUserName() +
				"', emailID= '" + super.getEmailId() + "',specilization='" + this.specilization + "', salary=" + this.salary + "]";
	}	
}
