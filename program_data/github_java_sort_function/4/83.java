package com.lbc.algorithms.sort;

public class Heapsort {

	private static int heapsize = 0;

	public static void main(String[] args) {
		int[] a = { 4, 1, 3, 2, 16, 9, 10, 14, 8, 7 };
		heapsize = a.length;
		build_max_heap(a);
		sort(a);
		printarr(a);
	}

	public static int parent(int i) {
		return (i - 1) >> 1;
	}

	public static int left(int i) {
		return (i << 1) + 1;
	}

	public static int right(int i) {
		return (i + 1) << 1;
	}

	
	public static void sort(int[] a) {
		while (heapsize-- >= 2) {
			exch(a, 0, heapsize);
			maxheapify(a, 0);
		}
	}

	public static void build_max_heap(int[] a) {
		int ceil = (a.length >> 1);
		for (int i = ceil; i >= 0; i--) {
			maxheapify(a, i);
		}
	}

	public static void maxheapify(int[] a, int i) {
		int l = left(i);
		int r = right(i);
		int largest = 0;
		if (l < heapsize && a[l] > a[i]) {
			largest = l;
		} else
			largest = i;
		if (r < heapsize && a[r] > a[largest]) {
			largest = r;
		}
		if (largest != i) {
			exch(a, largest, i);
			maxheapify(a, largest);
		}
	}

	static void exch(int[] a, int i, int j) {
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
