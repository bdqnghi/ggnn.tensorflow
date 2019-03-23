package algorithm.sort;

import java.util.LinkedList;
import java.util.Queue;

public class RadixSort {
	public static void sort(int[] data) {
		int radix = 10;
		int digits = 10;

		
		Queue<Integer>[] queues = new Queue[radix];
		for (int i = 0; i < radix; i++) {
			queues[i] = new LinkedList<Integer>();
		}

		
		for (int i = 0, factor = 1; i < digits; factor *= radix, i++) {
			
			for (int j = 0; j < data.length; j++) {
				queues[(data[j] / factor) % radix].add(data[j]);
			}

			
			for (int k = 0, j = 0; j < radix; j++) {
				while (!queues[j].isEmpty()) {
					data[k++] = queues[j].remove();
				}
			}

		}

	}
}
