package util;

import java.util.ArrayList;

public class Radixsort {
	public static void  radixsort(int[] nums) {
		int len = nums.length;
		if (len <= 1) {
			return ;
		}
		int maxValue = Integer.MIN_VALUE;
		for (int i  : nums) {
			maxValue = Math.max(maxValue, i);
		}
		ArrayList<Integer>[] radixs = new ArrayList[10];
		for (int i = 0; i < 10; ++i) {
			radixs[i] = new ArrayList<Integer>();
		}
		
		int D = Integer.toString(maxValue).length();
		for (int i = 0; i < D; ++i) {
			for (int value : nums) {
				int index = getDigit(value, i);
				radixs[index].add(value);
			}
			int index = 0;
			for (ArrayList<Integer> list : radixs) {
				for (int listValue : list) {
					nums[index++] = listValue;
				}
				list.clear();
			}	
			
		}
	}
	private static int getDigit(int value, int pos) {
		for (int i = 0; i < pos; ++i) {
			value = value / 10;
		}
		return value % 10;
	}
}
