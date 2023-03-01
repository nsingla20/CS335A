// import and nested classes
import static java.lang.Math.PI;
class OuterClass {
	static class StaticNestedClass {
		void display()
		{
			System.out.println("outer_x = " + outer_x);
			System.out.println("outer_private = " + outer_private);
		}
	}
}
public class StaticNestedClassDemo {
	public static void main(String[] args)
	{
		OuterClass.StaticNestedClass nestedObject = new OuterClass.StaticNestedClass();
		nestedObject.display();
	}
}