// support for interfaces
interface printable{  
    void print();  
}

class Test<T> {
    // An object of type T is declared
    T obj;
    Test(T obj) { this.obj = obj; } // constructor
    public T getObject() { return this.obj; }
}

class OptionalFeatures implements printable{  
    public void print() {
        System.out.println("Hello");
    }  
  
    public static void main(final String[] args) {
        OptionalFeatures obj = new OptionalFeatures();
        obj.print();
        
        // Strings, concatenation, printing with println
        String s = " Hello D\"Cap\n";
        System.out.println(s);
        System.out.println("Hello World");
        s = s + "Hello World" + "!";

        // Type casting
        int a = (int) 1.2;
        double b = (double)12 + 13.2;
    }
}  