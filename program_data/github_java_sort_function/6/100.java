import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

public class RadixSort {

    private static void radixSort(int[] arr, int length) {
        int max = getMax(arr, length);

        for (int exp = 1; max / exp > 0; exp *= 10)
            sort(arr, length, exp);
    }

    private static void sort(int[] arr, int length, int exp) {
        List<Queue<Integer>> q = new ArrayList<Queue<Integer>>();
        for (int i = 0; i < 10; i++)
            q.add(i, new LinkedList<>());

        for (int i = 0; i <= length; i++) {
            q.get((arr[i] / exp) % 10).add(arr[i]);
        }

        int i = 0, k = 0;
        while (i < 10) {
            while (!q.get(i).isEmpty()) {
                arr[k++] = q.get(i).remove();
            }
            i++;
        }
    }

    private static int getMax(int[] arr, int length) {
        int mx = arr[0];
        for (int i = 1; i < length; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }
}
