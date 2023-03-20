class QuickSort
{
	private void sort(int arr[], int low, int high) // f
	{}
	public static void main(String args[])
	{
		int arr[] = {10, 7, 8, 9, 1, 5};
		int n = arr.length;

		QuickSort ob = new QuickSort();
		ob.sort(arr, 0, n-1);
		// ab.sort(arr, 0, n-1);		// Uncomment to see error

		System.out.println("sorted array");
		printArray(arr);
	}
}
