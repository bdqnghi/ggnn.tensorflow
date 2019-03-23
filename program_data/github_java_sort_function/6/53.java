package sorts;

import java.util.Arrays;


public class RadixSort {
    public static int[] sort(int[] arr) {
        int max = getMax(arr);

        for(int exp = 1; max / exp > 0; exp *= 10) {
            countSort(arr, exp);
        }

        return arr;
    }

    
    
    
    
    private static void countSort(int[] arr, int exp)
    {
        int output[] = new int[arr.length]; 
        int i;
        int count[] = new int[10];
        Arrays.fill(count,0);

        
        for (i = 0; i < arr.length; i++)
            count[ (arr[i]/exp)%10 ]++;

        
        
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        
        for (i = arr.length - 1; i >= 0; i--)
        {
            output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
            count[ (arr[i]/exp)%10 ]--;
        }

        
        
        for (i = 0; i < arr.length; i++)
            arr[i] = output[i];
    }

    
    private static int getMax(int[] arr) {
        int max = Integer.MIN_VALUE;

        for(int n : arr) {
            if (n > max) max = n;
        }

        return max;
    }
}
