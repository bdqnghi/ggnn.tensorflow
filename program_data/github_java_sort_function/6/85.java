package sorting;


public class RadixSort {

	
	public static int[] sort(int[] arr, int n) {
		int[][] a = convert(arr, n);
		int digit = a[0].length;
		
		return null;
	}
	
	public static int[][] convert(int[] arr, int n) {
		int[][] a = new int[arr.length][(int) Math.log10(n)+1];
		for (int i = 0; i < a.length; i++) {
			int num = arr[i];
			int j = a[0].length - 1;
			while (num != 0) {
				a[i][j] = num % 10;
				num /= 10;
				j--;
			}
		}
		return a;
	}
}
