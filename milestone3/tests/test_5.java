public class Example1 {
	int x;
   	double y;

	Example1(int x, double y) {
   		this.x = x;
     	this.y = y;
   	}

   	public static void main(String[] args /*so that we can compile with javac*/) {
   		Example1 a = new Example1(2,3.14);
		int x = 10;
		float y = 10.0;
     	System.out.println(a.x);
     	System.out.println(a.y);
   	}
}