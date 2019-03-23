import java.util.Scanner;


public class Selectionsort {

	
	public static void main(String[] args) {
		int n, i, j, swap;
		Scanner in = new Scanner(System.in);

		System.out.println("Input number of integers to sort");
		n = in.nextInt();
		

		int array[] = new int[n];

		System.out.println("Enter " + n + " integers");

		for ( i = 0; i<=n-1; i++)
			array[i] = in.nextInt();

		for (i= 0; i <=(n - 1); i++) {
			for (j= i+1; j < n; j++) {
				if (array[i] > array[j]) {
					swap = array[i];
					array[i] = array[j];
					array[j] = swap;
				}
			}
		}

		System.out.println("Sorted list of numbers");

		for (i = 0; i < n; i++)
			System.out.println(array[i]);
	

	}

}
