package alms;

public abstract class Course {
	private int courseId;
	private String courseName;
	private int duration;
	private double courseFees;
	public Course(int courseId, String courseName, int duration, double courseFees) {
		super();
		this.courseId = courseId;
		this.courseName = courseName;
		this.duration = duration;
		this.courseFees = courseFees;
	}
	public String getCourseName() {
		return courseName;
	}
	public void setCourseName(String courseName) {
		this.courseName = courseName;
	}
	public int getDuration() {
		return duration;
	}
	public void setDuration(int duration) {
		this.duration = duration;
	}
	public double getCourseFees() {
		return courseFees;
	}
	public void setCourseFees(double courseFees) {
		this.courseFees = courseFees;
	}
	public int getCourseId() {
		return courseId;
	}
	//abstract method
	abstract public void showCourseDetails();
	@Override
	public String toString() {
		return "Course [courseId=" + courseId + ", courseName=" + courseName + ", duration=" + duration
				+ ", courseFees=" + courseFees + "]";
	}

}
