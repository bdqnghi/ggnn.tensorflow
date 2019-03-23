package g4g1st.sorting;

import java.util.Arrays;

public class RadixSort {
    

    public static void main(String[] args) {
        int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
        RadixSort ob = new RadixSort();
        ob.radixSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    void radixSort(int[] A) {
        if (A == null || A.length == 0) return;

        int max = getMax(A);

        for (int exp = 1; (max / exp) > 0; exp *= 10) {
            countingSort(A, exp);
        }
    }

    void countingSort(int[] A, int exp) {
        int n = A.length;
        int output[] = new int[n]; 
        int i;
        int count[] = new int[10];

        
        for (i = 0; i < n; i++) count[(A[i] / exp) % 10]++;

        
        for (i = 1; i < 10; i++) count[i] += count[i - 1];

        
        for (i = n - 1; i >= 0; i--) {
            output[count[(A[i] / exp) % 10] - 1] = A[i];
            count[(A[i] / exp) % 10]--;
        }

        for (i = 0; i < n; i++) A[i] = output[i];
    }

    int getMax(int[] A) {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < A.length; i++) {
            max = Math.max(max, A[i]);
        }
        return max;
    }


}
