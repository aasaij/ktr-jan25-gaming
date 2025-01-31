package alms;
//POJO class
public class User {
	private int userId;
	private String userName;
	private String emailId;
	public User(int userId, String userName, String emailId) {
		super();
		this.userId = userId;
		this.userName = userName;
		this.emailId = emailId;
	}
	public String getUserName() {
		return userName;
	}
	public void setUserName(String userName) {
		this.userName = userName;
	}
	public String getEmailId() {
		return emailId;
	}
	public void setEmailId(String emailId) {
		this.emailId = emailId;
	}
	public int getUserId() {
		return userId;
	}
	@Override
	public String toString() {
		return "User [userId=" + userId + ", userName=" + userName + ", emailId=" + emailId + "]";
	}	
}
