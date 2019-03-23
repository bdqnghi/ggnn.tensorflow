package sort;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;

public class HeapSort {
	private int heaplength = 0;

	public void heapTheNode(int[] heap, int i) {
		int left = 2 * i + 1;
		int right = 2 * i + 2;
		int large = i;
		if (left < heaplength && heap[left] > heap[i])
			large = left;
		if (right < heaplength && heap[right] > heap[large])
			large = right;
		if (large != i) {
			int temp = heap[large];
			heap[large] = heap[i];
			heap[i] = temp;
			heapTheNode(heap, large);
		}
	}

	public void buildTheHeap(int[] heap) {
		heaplength = heap.length;
		for (int i = (heap.length - 1) / 2 - 1; i >= 0; i--) {
			heapTheNode(heap, i);
		}
	}

	public void heapSort(int[] heap) {
		buildTheHeap(heap);
		for (int i = heap.length - 1; i > 0; i--) {
			int temp = heap[0];
			heap[0] = heap[i];
			heap[i] = temp;
			heaplength--;
			heapTheNode(heap, 0);
		}
	}

	
		

}
