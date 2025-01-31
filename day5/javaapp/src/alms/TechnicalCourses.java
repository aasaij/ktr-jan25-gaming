package alms;

public class TechnicalCourses extends Course {

	public TechnicalCourses(int courseId, String courseName, int duration, double courseFees) {
		super(courseId, courseName, duration, courseFees);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void showCourseDetails() {		
		System.out.println("Course ID   : " + super.getCourseId());
		System.out.println("Course Name : " + super.getCourseName());
		System.out.println("Duration    : " + super.getDuration());
		System.err.println("Fees        : " + super.getCourseFees());		
	}
}
