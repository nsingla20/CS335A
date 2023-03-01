public class BubbleSort {
    public static void main(final String[] args) {
        int n = 10, c, d, swap;
        float s, sd;
        double k1, k2;  boolean b1, b2;

        int array[] = new int[] { 23, 1, 78, 45, 46, 90, 2, 12, 75, 0 };
        float arr2[][] = new float[10][10];
        double arr3[][][] = new double[10][10][10];

        int a = a + 2 + s * 10 / 1.2 % --k1 - k2++;
        b = b1 && b2 || !b1;
        c = c >> 2 << 3 + (1 & 3 | 5) ^ 2 | ~c;
        f += 21.2;
        g %= 12;
        a = (b + c >= d) ? (e + f) : (g + h);

        if (a == b) {
            a = b;
        } else if (a != b) {
            a = b;
        } else {
            a = b;
        }

        while (a < b) {
            a = b;
        }

        for (c = 0; c < (n - 1); c++) {
            for (d = 0; d < n - c - 1; d++) {
                if (array[d] > array[d + 1]) /* For descending order use < */
                {
                    swap = array[d];
                    array[d] = array[d+1];
                    array[d + 1] = swap;
                }
            }
        }

        System.out.println("hello \" world 'h' \" \n\t");
        
        for (c = 0; c < n; c++)
            System.out.println(array[c]);

        int i = foo(1, 2);
        int j = rec(10, 0);
        

    }

    public int foo(int a, int b) {
        return a + b;
    }

    public int rec(int a, int b) {
        if (a <= 0) {
            return b;
        } else {
            return rec(a - 1, b + 1);
        }
    }
}

public class TypeCoercion {
    public static void dummy() {
        int intVar = 100;
        long longVar = intVar;
        float floatVar = longVar;
        double doubleVar = longVar;

        double dVar = 3.141596;
        long lVar = (long) dVar;
        int iVar = (int) dVar;

        System.out.println("Dummy print: " + (short) 3.14F);

        double exp = intVar + longVar + dVar * floatVar + lVar + doubleVar + iVar;
        System.out.println("Exp: " + exp);
    }
}