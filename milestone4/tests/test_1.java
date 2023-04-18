public class Test1 {
	public int sum(int a, float b) {
		int c = 15;
		c = a + b;
		return c;
	}
	
	public static void main() {
		int a, b;
		double c = 12.5;
		b = 15 + a*2 + c;
		if (a > b)
			a = a + sum(b, c);
		
		for (int i = 0; i < 15; i++){
			i += 1;
			a = a + b;
		}
	}
}