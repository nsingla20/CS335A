public class BitwiseOperators {
    public static void main(String[] args) {
        // Bitwise operators
        int a = 10; // 1010 in binary
        int b = 6; // 0110 in binary

        int c = a & b; // Bitwise AND
        int d = a | b; // Bitwise OR
        int e = a ^ b; // Bitwise XOR

        System.out.println(c); // Output: 2
        System.out.println(d); // Output: 14
        System.out.println(e); // Output: 12

        // Arrays

        int arr2[] = new int[5]; // Declare and initialize an array of integers
        for (int i=0; i<5; i++) arr2[i] = i + 1;
        arr2[0] = 1;
        System.out.println(arr2[0]);
    }
}
