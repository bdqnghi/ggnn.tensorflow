package exercise_sort_radix;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

import exercise_sort_impl.Sort;

public class Radix implements Sort{
	public  void sort(int[] arr) {
		if (arr == null || arr.length < 2) {
			return;
		}
		int negNum = 0; 
		for (int i = 0; i < arr.length; i++) {
			negNum += arr[i] < 0 ? 1 : 0;
		}
		int[] negArr = new int[negNum];
		int[] posArr = new int[arr.length - negNum];
		int negi = 0;
		int posi = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < 0) {
				negArr[negi++] = -arr[i];
			} else {
				posArr[posi++] = arr[i];
			}
		}
		radixSortForPositive(negArr);
		radixSortForPositive(posArr);
		int index = 0;
		for (int i = negArr.length - 1; i >= 0; i--) {
			arr[index++] = -negArr[i];
		}
		for (int i = 0; i < posArr.length; i++) {
			arr[index++] = posArr[i];
		}
	}

	
	private  void radixSortForPositive(int[] arr) {
		if (arr == null || arr.length < 2) {
			return;
		}
		ArrayList<LinkedList> qArr1 = new ArrayList<>();
		ArrayList<LinkedList> qArr2 = new ArrayList<>();
		for (int i = 0; i < 10; i++) {
			qArr1.add(new LinkedList());
			qArr2.add(new LinkedList());
		}
		for (int i = 0; i < arr.length; i++) {
			qArr1.get(arr[i] % 10).offer(arr[i]);
		}
		long base = 10;
		while (base <= Integer.MAX_VALUE) {
			for (int i = 0; i < 10; i++) {
				LinkedList queue = qArr1.get(i);
				while (!queue.isEmpty()) {
					int value = (int) queue.poll();
					qArr2.get((int) (value / base) % 10).offer(value);
				}
			}
			ArrayList<LinkedList> tmp = qArr1;
			qArr1 = qArr2;
			qArr2 = tmp;
			base *= 10;
		}
		int index = 0;
		for (int i = 0; i < 10; i++) {
			LinkedList queue = qArr1.get(i);
			while (!queue.isEmpty()) {
				arr[index++] = (int) queue.poll();
			}
		}
	}


}