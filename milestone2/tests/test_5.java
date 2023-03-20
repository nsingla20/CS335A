class test_25
{  
    public static void main(String args[])
    {  
	char c = 'c';
	String s = "hello";
	String t = "hello";
	c = 18;
	int x = 20;
	int y = 18;
	// x = "Uncomment to see error";
	x = t; //Uncomment to see error
	x = y;
	if (x > y) 
  		System.out.println("x is greater than y");
    }  
}

