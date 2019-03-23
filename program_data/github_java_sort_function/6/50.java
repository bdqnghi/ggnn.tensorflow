package leetcode.common.utils;

import java.util.Arrays;
import java.util.stream.Collectors;


public class Radix {
    static int getMax(int[] arr) {
        return Arrays.stream(arr).max().getAsInt();
    }

    static void countSort(int[] arr, int exp) {
        int n = arr.length;
        int[] output = new int[n];
        int[] count = new int[10];
        Arrays.fill(count, 0);

        for (int i = 0; i < n; i++)
            count[(arr[i]/exp) % 10]++;

        for (int i = 1; i < 10; i++)
            count[i] += count[i-1];

        for (int i = n-1; i >= 0; i--) {
            output[count[(arr[i]/exp)%10] - 1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
        System.out.println(Arrays.stream(arr).mapToObj(String::valueOf).collect(Collectors.joining(",")));
    }

    public static void radixSort(int[] arr) {
        int m = getMax(arr);
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort(arr, exp);
    }


}
