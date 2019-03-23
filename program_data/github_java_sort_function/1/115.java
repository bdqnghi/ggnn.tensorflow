package com.datstruct;

public class InsertionSort {
	public static void main(String[] args) {
		int[] list = { 1, 8, 4, 6, 0, 3, 5, 2, 7, 9 };
		int valueToInsert;
		int holePosition;
		for (int i = 1; i < list.length; i++) {
			valueToInsert = list[i];
			holePosition = i;

			while (holePosition > 0 && list[holePosition - 1] > valueToInsert) {
				list[holePosition] = list[holePosition - 1];
				holePosition--;
			}
			if (i != holePosition) {
				list[holePosition] = valueToInsert;
			}
		}
		
		for (int i = 0; i < list.length; i++) {
			System.out.println(list[i]);
		}
	}
}
