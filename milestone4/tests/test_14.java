package com.dataflair.loops;
import java.io. * ;
public class ForLoop {
  public static void main(String[] args) {
    int i;
    for (i = 0; i <= 10; i++) {
      System.out.println("Studying for loops at DataFlair");
      System.out.println("Value of i = " + i);
    }
  }
}

public class EnhancedFor {
  public static void main(String[] args) {
    String array[] = {
      "DataFlair",
      "Java",
      "Python"
    };
    for (String a: array) {
      System.out.println(a);
    }
  }
}

public class WhileLoop {
  public static void main(String[] args) {
    int i = 0;
    while (i < 5) {
      System.out.println("Learning Java at DataFlair");
      System.out.println("The value of i is = " + i);
      i++;
    }
    System.out.println("The value of i became " + i + " that is why it broke out of the loop");
  }

}

public class DoWhileLoop {
  public static void main(String[] args) {
    int i = 0;
    do {
      i++;
      System.out.println("Learning Java at DataFlair");
      System.out.println("The value of i is " + i);

    }
    while ( i != 5 );
  }

}

public class NestedLoop {
  public static void main(String[] args) {
    int i,
    j,
    k;
    k = 0;
    for (i = 0; i < 6; i++) {
      for (j = 0; j < 6; j++) {
        System.out.print(k + "\t");
        k++;
      }
      System.out.println("");
    }
  }
}
