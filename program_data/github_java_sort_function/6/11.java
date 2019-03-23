package sorting.radixsort;

public class Radixsort {

	static final int D = 2;
	static final int K = 10;

	private static String getIthDigit(String a, int i) {
		
		return a.substring(a.length() - i - 1, a.length() - i);
	}

	private static void printArray(String[] A) {
		System.out.print("A: ");
		for (int i = 0; i < A.length; i++) {
			System.out.print(A[i]);
			if (i < A.length - 1)
				System.out.print(" ");
		}
		System.out.println();
	}

	private static String incrementNumber(String s) {
		
		s = String.valueOf(Integer.valueOf(s) + 1);
		while (s.length() < D)
			s = "0" + s;
		
		return s;
	}

	private static String decrementNumber(String s) {
		
		s = String.valueOf(Integer.valueOf(s) - 1);
		while (s.length() < D)
			s = "0" + s;
		
		return s;
	}

	private static String[] countingsort(String[] A, int index, int k) {
		String[] B = new String[A.length];
		String[] C = new String[k + 1];
		for (int i = 0; i <= k; i++) {
			C[i] = "0";
		}

		for (int j = 0; j <= A.length - 1; j++) {
			C[Integer.valueOf(getIthDigit(A[j], index))] = incrementNumber(C[Integer.valueOf(getIthDigit(A[j], index))]);
		}

		for (int i = 1; i <= k; i++) {
			C[i] = String.valueOf(Integer.valueOf(C[i]) + Integer.valueOf(C[i - 1]));
			while (C[i].length() < D)
				C[i] = "0" + C[i];
		}

		for (int i = A.length - 1; i >= 0; i--) {
			B[Integer.valueOf(C[Integer.valueOf(getIthDigit(A[i], index))]) - 1] = A[i];
			C[Integer.valueOf(getIthDigit(A[i], index))] = decrementNumber(C[Integer.valueOf(getIthDigit(A[i], index))]);
		}

		return B;
	}

	public static String[] radixsort(String[] A, int k) {
		for (int i = 0; i < D; i++) {
			A = countingsort(A, i, k - 1);
			printArray(A);
		}
		return A;
	}

	public static void main(String[] args) {
		
		String[] array = args[0].split(",");
		
		for (int i = 0; i < array.length; i++)
			while (array[i].length() < D)
				array[i] = "0" + array[i];

		printArray(array);
		printArray(radixsort(array, K));
	}
}
