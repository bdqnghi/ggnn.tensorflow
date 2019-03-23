package com.meiliinc.mls.algorithm.sort;


public class SortAlgoHeapSort {

    
    private static void shiftUp(int[] arr, int i){
        int temp = arr[i];
        int j = (i - 1) / 2; 
        while (j >= 0 && i != 0){
            if (arr[j] <= temp){ 
                break;
            }
            arr[i] = arr[j]; 
            i = j;
            j = (i - 1) / 2;
        }
        arr[i] = temp;
    }

    
    private static void heapInsert(int[] arr, int n, int num){
        arr[n] = num;
        shiftUp(arr, n);
    }

    
    private static void shiftDown(int[] arr, int i, int n){
        int temp = arr[i];
        int j = 2 * i + 1;
        while (j < n) {
            
            if (j + 1 < n && arr[j + 1] < arr[j]) {
                j++;
            }
            if (arr[j] >= temp){
                break;
            }
            arr[i] = arr[j];     
            i = j;
            j = 2 * i + 1;
        }
        arr[i] = temp;
    }

    
    private static void heapDelete(int[] arr, int n){
        
        int temp = arr[n - 1];
        arr[n - 1] = arr[0];
        arr[0] = temp;
        
        shiftDown(arr, 0, n - 1);
    }

    
    private static void createHeap(int[] arr, int n) {
        for (int i = n / 2 - 1; i >= 0; i--){
            shiftDown(arr, i, n);
        }
    }

    public static int[] heapSort(int[] arr, int n){
        for (int i = n - 1; i >= 1; i--) {
            int temp = arr[0];
            arr[0] = arr[n - 1];
            arr[n - 1] = temp;
            shiftDown(arr, 0, i);
        }
        return arr;
    }

}
