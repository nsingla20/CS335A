package algorithms;

import java.util.Scanner;
import java.io.*;
import static java.lang.System.out;

class Sort {
    public int vec = 10;

    public void make() {
        // return 12; // Uncomment to see return type mismatch
    }
}

public final class BubbleSort extends Sort {
    public int x, y=15;
    private double z;

    BubbleSort(float x) {
        this.x = x;
        this.y = x+1;
        this.z = 0f;
    }

    private int result(int a, int b) {
        int res = 15;
        // if (a + b) { // Uncomment to see incorrect type for condition
        if (a >= b == a <= b) {
            if (a >= b)
                res = b--;
            else {
                res = ++a;
            }
        }
        else if (a * b == a / b) {
            int e = 42;
            res = a + e*b + b;
        }
        else
            res = a + b*a + b;
        System.out.println(res);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j)
                    continue;
                else if (i == 0)
                    break;
                else
                    res = i + j;
            }
        }
        return res;
    }

    public static int main(final String[] args) {
        int n = 10, j, k, d, swap;
        k = 27 + j;
        // k = 2 + "Hello"; // Uncomment to see incorrect operand type with +

        this.x = 12;
        // n = 12*x + super.vec;
        // String str = "Hello World";

        int array[] = new int[2];
        int array1[] = new int[]{1, 2, 3, 4, 5};
        // array[2.5] = 12; // Uncomment to see incorrect array index
        // k[1] = 12; // Uncomment to see incorrect array access
        // array[1][2] = 12; // Uncomment to see incorrect array access

        float arr[][] = new float[2][2];
        // arr[0] = 12; // Uncomment to see type error
        arr[1][1] = 13.6f;

        for (int i = 0; i < 10; i++) {
            char k = 'c' + i;
            char f = (char) 65 + k;
            int array3[] = { 1, 2, 3, 4, 5, 6 };
            int array4[][] = { {1, 2, 3}, {4, 5, 6} };
            for (; k >= 0; k -= 2) {
                f += k;
            }
            k = 'f' + n;
        }
        while (n > 0) {
            if (n == 0)
                break;        // no support for break yet
            else if (n == 1)
                continue;     // no support for continue yet
            else
                n--;
            int d = n-k;
            n--; k++;
            j += d;
        }
        // do {
        //     n = j + k;
        //     k++;
        // } while (j < k);

        Sort obj = new Sort();
        // obj.vec = "hello";     // Uncomment to see type mismatch
        n = obj.vec++ + result(n, k);
        // break; // Uncomment to see break outside loop
        // return result(n, arr); // Uncomment to see incorrect argument type
        return 0;
    }
}

/*

.\newcompiler ..\tests\test_1.java
.\newcompiler ..\tests\test_2.java
.\newcompiler ..\tests\test_3.java
.\newcompiler ..\tests\test_4.java
.\newcompiler ..\tests\test_5.java
.\newcompiler ..\tests\test_6.java
.\newcompiler ..\tests\test_7.java
.\newcompiler ..\tests\test_8.java
.\newcompiler ..\tests\test_9.java
.\newcompiler ..\tests\test_10.java
.\newcompiler ..\tests\test_11.java
.\newcompiler ..\tests\test_13.java
.\newcompiler ..\tests\test_14.java
.\newcompiler ..\tests\test_15.java
.\newcompiler ..\tests\test_16.java
.\newcompiler ..\tests\test_17.java


*/
