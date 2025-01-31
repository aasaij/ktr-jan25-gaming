package alms;

public class StudentsEntrolled {
	private int userId;
	private int courseId;
	private double discount;
	
	public void entrolStudent(int userId, int courseId) {
		this.entrolStudent(userId, courseId, 0);
	}
	//Method overloading
	public void entrolStudent(int userId, int courseId, double discount) {
		this.courseId = courseId;
		this.discount = discount;
		this.userId = userId;
	}
	public int getUserId() {
		return userId;
	}
	public void setUserId(int userId) {
		this.userId = userId;
	}
	public int getCourseId() {
		return courseId;
	}
	public void setCourseId(int courseId) {
		this.courseId = courseId;
	}
	public double getDiscount() {
		return discount;
	}
	public void setDiscount(double discount) {
		this.discount = discount;
	}	

}
