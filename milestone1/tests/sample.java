// Java program to show working of user defined
// Generic classes

class Test<T> {
	Test(T obj) { this.obj = obj; } // constructor
	public T getObject() { return this.obj; }
}

// Driver class to test above
class Main {
	public static void main(String[] args)
	{

		Test<Integer> iObj = new Test<Integer>(15);
		System.out.println(iObj.getObject());

		Test<String> sObj
			= new Test<String>("GeeksForGeeks");
		System.out.println(sObj.getObject());
	}
}
