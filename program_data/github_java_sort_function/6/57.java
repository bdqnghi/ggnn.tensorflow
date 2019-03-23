package sort;


public class Sort_09_RadixSort {

    public static int[] radixSort(int[] arr) {
        if (arr == null || arr.length < 2)
            return null;
        int a = 1;
        int m = 1;
        int k = 0;
        
        int[][] number = new int[10][arr.length];
        
        int[] count = new int[10];
        while (m <= 4) {
            for (int j = 0; j < arr.length; j++) {
                int lsd = ((arr[j] / a) % 10);
                number[lsd][count[lsd]] = arr[j];
                count[lsd]++;
            }
            for (int p = 0; p < 10; p++) {
                
                if (count[p] != 0) {
                    for (int q = 0; q < count[p]; q++) {
                        arr[k] = number[p][q];
                        k++;
                    }
                }
                count[p] = 0;
            }
            k = 0;
            a *= 10;
            m++;
        }
        return arr;
    }

    public static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = {21, 5, 4, 8, 2, 3, 0, 9, 7, 4, 5, 10};
        printArray(radixSort(arr));
    }
}
