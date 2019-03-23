import java.util.Date;
import java.util.Vector;

public final class Bucket {
    public static void sort(int arr[], int n) {
        Vector<Integer> b[] = new Vector[n];

        for (int i=0; i<n; i++) {
            b[i] = new Vector<Integer>();
        }

        for (int i=0; i<n; i++) {
            int bi = (int)Math.floor(arr[i] / n);
            b[bi].add(arr[i]);
        }

        for (int i=0; i<n; i++) {
            b[i].sort(Integer::compareTo);
        }

        int idx = 0;

        for (int i=0; i<n; i++) {
            for (int j = 0; j < b[i].size(); j++) {
                arr[idx++] = b[i].get(j);
            }
        }
    }

    public static void sortBenchmark(int arr[], int n) {
        long start, end, delta;

        start = new Date().getTime();
        sort(arr, n);
        end = new Date().getTime();
        delta = end - start;

        System.out.println("Bucket Sort of length " + n + " done!");
        System.out.println("Time: " + delta);
    }
}
