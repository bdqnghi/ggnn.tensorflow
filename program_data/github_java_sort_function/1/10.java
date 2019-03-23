package code.Kiran.algo;

public class Insertionsort {
	public static void main(String[] args) {
		int[] Array = { 10, 34, 2, 56, 7, 67, 88, 42 };
		insertsort(Array);
		for (int i : Array) {
			System.out.print(i);
		}
	}

	public static int[] insertsort(int[] Array) {

		int temp;
		for (int i = 1; i < Array.length; i++) {
			for (int j = i; j > 0; j--) {
				if (Array[j] < Array[j - 1]) {
					temp = Array[j];
					Array[j] = Array[j - 1];
					Array[j - 1] = temp;
				}
			}
		}
		return Array;
	}
}
