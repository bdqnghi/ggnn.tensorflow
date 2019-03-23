package com.algorithmhelper.generalalgorithms.sorting;

public class ShellSort {

    
    public static void sort(Comparable[] arr) {
        if (arr == null)
            throw new IllegalArgumentException("sort with null arr");

        int n = arr.length;
        int h = 1;
        while (h < n/3)
            h = 3*h + 1;

        while (h >= 1) {
            for (int i = h; i < n; i++) {
                for (int j = i; j >= h && less(arr[j], arr[j-h]); j -= h)
                    swap(arr, j, j-h);
            }
            h /= 3;
        }
    }

    
    private static boolean less(Comparable x, Comparable y) {
        return x.compareTo(y) < 0;
    }

    
    private static void swap(Comparable[] arr, int i, int j) {
        Comparable temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
