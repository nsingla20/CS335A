public class Example1 {
	int x;
   	int y;

	Example1(int x, double y) {
   		this.x = x;
     	this.y = y;
   	}

   	public static void main(String[] args /*so that we can compile with javac*/) {
   		Example1 a;
		a.x=1;
		a.y=2;
		Example1 b;
		b.x=10;
		// b.y=12;
		int x = 10;
		float y = 10;
     	System.out.println(a.x);
     	System.out.println(a.y);
   	}
}
