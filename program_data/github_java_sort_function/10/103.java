package com.levon.algorithms.sorting;

public class BucketSort {
	
	public static void main(String[] args) {
		int[] ar = new int[] {44,7,2,3,1,9,6,4,8};
		for (int i = 0; i < ar.length; i++) {
			System.out.print(ar[i]+" ");
		}
		System.out.println();
		int max = findMaxElement(ar);
		int[] bucket = new int[max+1];
		for (int i = 0; i < bucket.length; i++) {
			bucket[i] = 0;
		}
		for (int i = 0; i < ar.length; i++) {
			bucket[ar[i]]++;
		}
		int k = 0;
		for (int j = 0; j < bucket.length; j++) {
			while(bucket[j] > 0) {
				ar[k] = j;
				bucket[j]--;
				k++;
			}	
		}
		for (int i = 0; i < ar.length; i++) {
			System.out.print(ar[i]+" ");
		}
	}

	private static int findMaxElement(int[] ar) {
		int max = ar[0];
		for (int i = 1; i < ar.length; i++) {
			if(ar[i] > max) {
				max = ar[i];
			}
		}
		return max;
	}
}
