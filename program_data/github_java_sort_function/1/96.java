package PukyungUniv;

import static org.junit.Assert.assertEquals;

import java.util.Arrays;

import org.junit.Test;

public class Sort_InsertionSort {

    @Test
    public void test() {
        int[] data = { 1, 3, 5, 7, 2, 4, 6, 8 };
        Sort_InsertionSort.sort(data);
        assertEquals(Arrays.toString(new int[] { 1, 2, 3, 4, 5, 6, 7, 8 }), Arrays.toString(data));
    }
    
    public static void sort(int[] data) {
        for (int k = 1; k < data.length; k++) {
            int tmp = data[k];
            int t = k;
            while (t > 0 && data[t - 1] > tmp) {
                data[t] = data[t - 1];
                t--;
            }
            data[t] = tmp;
        }
    }
}
