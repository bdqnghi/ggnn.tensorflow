package com.personal.sorting;

public class InsertionSort {

    
    
    
    
    
    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 96, 11};

        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;

        }

        for (int i : arr) {
            System.out.println(i);
        }
    }
}
