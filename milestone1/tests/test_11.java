class Bike{  
    void run(){
        System.out.println("running");
    }  
}  

class Splendor extends Bike {
    void run(){
        System.out.println("walking safely with 30km");
    }  
}

class DynamicPoly {
    public static void main(String[] args) {
        Bike b = new Splendor(); //upcasting  
        b.run();
    }
}