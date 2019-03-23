package Interview;

import java.util.Arrays;
import java.util.Random;


public class Heapsort {
    private int[] x;
    private int[] origin;

    public Heapsort(int[] arr) {
        
        origin = arr;
        x = new int[arr.length + 1];
        for (int i = 0; i < arr.length; i ++) {
            x[i + 1] = arr[i];
        }
    }

    public void sort() {
        for (int i = 1; i < x.length; i ++) {
            siftup(i);
        }
        for (int i = x.length - 1; i >= 2; i --) {
            swap(1, i);
            siftdown(i - 1);
        }
        for (int i = 0; i < origin.length; i ++) {
            origin[i] = x[i + 1];
        }
    }

    private void swap(int i, int j) {
        int t = x[i];
        x[i] = x[j];
        x[j] = t;
    }

    private void siftup(int n) {
        int i = n;
        while (true) {
            if (i == 1) break;
            int p = i / 2;
            if (x[p] >= x[i]) break;
            swap(p, i);
            i = p;
        }
    }
    private void siftdown(int n) {
        int i = 1;
        while (true) {
            int c = 2 * i;
            if (c > n) break;
            if (c + 1 <= n) {
                if (x[c + 1] > x[c]) {
                    c ++;
                }
            }
            if (x[i] >= x[c]) break;
            swap(c, i);
            i = c;
        }
    }

}
