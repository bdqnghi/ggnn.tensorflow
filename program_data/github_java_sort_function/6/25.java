package org.gsu.cs.client;

import org.gsu.cs.sort.RadixSort;
import org.gsu.cs.util.SortUtil;


public class BestBaseRadixSort {

	public BestBaseRadixSort() {
		super();
	}

	
	public static void main(String[] args) {

		int power = 14;
		int size = 0;
		int maxPower = 15;
		int noOfLoops = 20;

		
		while (power < maxPower) {

			System.gc();
			size = (int) Math.pow(2.0, power);

			

			for (int base = 2; base <= 200; base++) {

				long averageRadixSortTime = 0;
				int numberOfPasses = SortUtil.calculateNumberOfPasses(20000,
						base);

				for (int i = 0; i < noOfLoops; i++) {

					
					
					int[] inputArray = SortUtil.generateRandomArray(size);
					

					averageRadixSortTime += performRadixSortTrialRuns(size,
							inputArray, base, numberOfPasses);
					System.gc();

				}

				System.out.println(base + "\t" + averageRadixSortTime
						/ noOfLoops);
			}
			power++;
		}

	}

	
	private static long performRadixSortTrialRuns(int size, int[] inputArray,
			int base, int numberOfPasses) {
		long totalTimeForRadixSort = 0;
		long startTime = 0;
		long endTime = 0;

		RadixSort rs = new RadixSort();
		System.gc();

		int[] quotientArray = SortUtil.copyArray(inputArray, size);

		startTime = System.nanoTime();
		rs.performRadixSort(inputArray, base, numberOfPasses, quotientArray,
				size);
		endTime = System.nanoTime();

		totalTimeForRadixSort += endTime - startTime;

		return totalTimeForRadixSort;
	}

}
