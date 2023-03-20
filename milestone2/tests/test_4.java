// Generic
class Test<T> {
	

}
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
