class Shape{
	private String color;
	public Shape(String color){
		this.color = color;
	}
	public static void setColor(String color){
		this.color = color;

	}
	public String getColor(){
		return color;
	}
	public double calculateArea(){
		return 0;
	}
}

class Circle extends Shape{
	private double radius;
	public Circle (String color , double radius){
		super(color);
		this.radius = radius;
		@Override
		public double calculateArea(){
			return 3.14*radius*radius;
		}
		
}

class Rectangle extends Shape{
	private double length;
	private double width;
	public Rectangle(String color ,double length ,double width){
		super(color);
		this.length = length;
		this.width = width;}

		@Override
		public double calculateArea(){
			return length*width;		
		}
	}
}
public class Bike5{
	public static void main(String args[]){
		Circle circle = new Circle("Red",5.0);
		System.out.println("Circle Color:"+circle.getColor());
		System.out.println("Circle Area : "+circle.calculateArea());

		Rectangle reactangle = new Rectangle("Blue",4.0,6.0);
		System.out.println("Rectangle Color : "+reactangle.getColor());
		System.out.println("Rectangle Area : "+reactangle.calculateArea());
		}
}