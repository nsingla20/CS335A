public class Test1 {
	public static void main() {
		int a, b;
		float c = 12.5;
		b = 15 + a*2 + c;
		if (a > b) {
			a = a + b;
		}
		for (int i = 0; i < 15; i++) {
			i += 1;
			a = a + b;
		}
	}
}