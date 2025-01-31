package alms;

public class Student extends User {
	private String courseEntrolled;
	private double feesPaid;
	public Student(int userId, String userName, String emailId, String courseEntrolled, double feesPaid) {
		super(userId, userName, emailId);
		this.courseEntrolled = courseEntrolled;
		this.feesPaid = feesPaid;
	}
	public String getCourseEntrolled() {
		return courseEntrolled;
	}
	public void setCourseEntrolled(String courseEntrolled) {
		this.courseEntrolled = courseEntrolled;
	}
	public double getFeesPaid() {
		return feesPaid;
	}
	public void setFeesPaid(double feesPaid) {
		this.feesPaid = feesPaid;
	}
	public void entrollStudent(int courseId) {
		
	}
	@Override
	public String toString() {
		return "Trainer [User ID = " + super.getUserId() + ", User Name = '" + super.getUserName() +
				"', Email ID= '" + super.getEmailId() + "',Course Entrolled='" + this.courseEntrolled + "', Fees Paid=" + this.feesPaid + "]";
	}
}
