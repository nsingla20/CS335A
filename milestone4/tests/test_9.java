public class GFG {
	static int permutationCoeff(int n,
								int k)
	{
		int fact[] = new int[20];

		// base case
		fact[0] = 1;

		for (int i = 1; i <= n; i++)
			fact[i] = i * fact[i - 1];

		return fact[n] ;
	}

	// Driver Code
	static public void main (String[] args)
	{
		int n = 10, k = 2;
		System.out.println(permutationCoeff(n, k) );
	}
}
