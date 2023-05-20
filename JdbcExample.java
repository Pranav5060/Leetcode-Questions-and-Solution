import java.sql.*;
//Pranav Gupta
//Registration No.-20BCE10582
public class JdbcExample {
    public static void main(String[] args) {
        try {
            // Connect to the database
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost/Detail", "root", "pranav123");
            
            // Insert some sample data
            Statement stmt = conn.createStatement();
            
            // Retrieve the data and calculate the total, average, and grade for each student
            String sql = "SELECT registration,name, subject1, subject2, subject3, subject4, subject5 FROM Student";
            ResultSet rs = stmt.executeQuery(sql);
            
            while (rs.next()) {
                int registerNumber = rs.getInt("registration");
                String studentName = rs.getString("name");
                int subject1 = rs.getInt("subject1");
                int subject2 = rs.getInt("subject2");
                int subject3 = rs.getInt("subject3");
                int subject4 = rs.getInt("subject4");
                int subject5 = rs.getInt("subject5");
                
                int total = subject1 + subject2 + subject3 + subject4 + subject5;
                double average = total / 5.0;
                String grade = "";
                
                if (average >= 90) {
                    grade = "A+";
                } else if (average >= 80) {
                    grade = "A";
                } else if (average >= 70) {
                    grade = "B";
                } else if (average >= 60) {
                    grade = "C";
                } else {
                    grade = "F";
                }
                
                System.out.println("Register Number: " + registerNumber);
                System.out.println("Student Name: " + studentName);
                System.out.println("Subject 1: " + subject1);
                System.out.println("Subject 2: " + subject2);
                System.out.println("Subject 3: " + subject3);
                System.out.println("Subject 4: " + subject4);
                System.out.println("Subject 5: " + subject5);
                System.out.println("Total: " + total);
                System.out.println("Average: " + average);
                System.out.println("Grade: " + grade);
                System.out.println();
            }
            
            // Close the database connection
            rs.close();
            stmt.close();
            conn.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}