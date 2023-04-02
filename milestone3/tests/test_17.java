class SimpleCalculator {
    int add(int a, int b) {
        return a+b;
    }
    int add(int a, int b, int c) {
        return a+b+c;
    }
}

class StaticPoly { 
    public static void main(String[] args) {
        SimpleCalculator sobj = new SimpleCalculator();
        System.out.println(sobj.add(25, 25));
        System.out.println(sobj.add(25, 25, 30));
    }
}  