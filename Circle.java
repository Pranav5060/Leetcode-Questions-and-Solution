import java.util.Scanner;

public class Circle {
  
  private double radius;
  
  public Circle(double radius) {
    this.radius = radius;
  }
  
  public double getArea() {
    return Math.PI * radius * radius;
  }
  
  public double getPerimeter() {
    return 2 * Math.PI * radius;
  }
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the radius of the circle: ");
    double radius = scanner.nextDouble();
    
    Circle circle = new Circle(radius);
    System.out.println("The area of the circle is: " + circle.getArea());
    System.out.println("The perimeter of the circle is: " + circle.getPerimeter());
    
    scanner.close();
  }
  
}
