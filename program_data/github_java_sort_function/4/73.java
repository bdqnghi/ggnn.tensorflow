package sort;


public class Sort_06_HeapSort {

    public static int[] heapSort(int[] arr) {
        
        arr = buildMaxHap(arr);
        
        for (int i = arr.length - 1; i > 0; i--) {
            
            swap(arr, 0, i);
            heapAdjust(arr, 0, i);
        }
        return arr;
    }

    private static int[] buildMaxHap(int[] arr) {
        for (int i = arr.length / 2; i >= 0; i--) {
            heapAdjust(arr, i, arr.length);
        }
        return arr;
    }

    
    public static void heapAdjust(int[] arr, int parent, int length) {
        int temp = arr[parent]; 
        int child = 2 * parent + 1; 
        while (child < length) {
            
            if (child + 1 < length && arr[child] < arr[child + 1]) {
                child++;
            }
            
            if (temp >= arr[child]) {
                break;
            }
            
            arr[parent] = arr[child];
            
            parent = child;
            child = 2 * child + 1;
        }
        arr[parent] = temp;
    }

    public static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

    public static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
