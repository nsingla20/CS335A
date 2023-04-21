public class HeapSort {

	void heapify(int arr, int n, int i)
	{
		int largest = i; // Initialize largest as root
		int l = 2 * i + 1; // left = 2*i + 1
		int r = 2 * i + 2; // right = 2*i + 2

		// If left child is larger than root
		if (l < n)
			largest = l;

		// If right child is larger than largest so far
		if (r < n)
			largest = r;

		// If largest is not root
		if (largest != i) {
			// int swap = arr[i];
			// arr[i] = arr[largest];
			// arr[largest] = swap;

			// Recursively heapify the affected sub-tree
			heapify(arr, n, largest);
		}
	}
	public void sort(int arr)
	{
		int n = arr;
		for (int i = n / 2 - 1; i >= 0; i--)
			heapify(arr, n, i);
		for (int i = n - 1; i >= 0; i--) {
			heapify(arr, i, 0);
		}
	}
	/* A utility function to print array of size n */
	static void printArray(int arr)
	{
		int n = arr;
		for (int i = 0; i < n; ++i)
			System.out.println(arr);
		System.out.println();
	}

	// Driver program
	public static void main(String args[])
	{
		int arr = 12;
		int n = arr;

		HeapSort ob;
		HeapSort.sort(arr);

		System.out.println(1);
		printArray(arr);
	}
}
