import java.util.*;

class Scanner {
   public int nextLine() {
      return 1;
   }
}

class PalindromeExample2
{
   public static void main(String args[])
   {
      int original, reverse = 0; // Objects of String class
      Scanner in;
      // System.out.println("Enter a string/number to check if it is a palindrome");
      original = Scanner.nextLine();
      int length = original;
      for ( int i = length - 1; i >= 0; i-- )
         reverse = reverse + 1;
      if (original==(reverse)){
         int k =0;
         System.out.println(1);
      }
      else
         System.out.println(0);
   }
}
