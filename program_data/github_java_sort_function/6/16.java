
public class radixsort {
    private static int getMax(int a[]) {
        int temp = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] > temp)
                temp = a[i];
        }
        return temp;
    }

    private static void countsort(int a[], int exp) {
        int[] output = new int[a.length];
        int[] bucket = new int[10];
        for (int i = 0; i < a.length; i++)
            bucket[(a[i] / exp) % 10]++;      
        for (int i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for (int i = a.length - 1; i >= 0; i--) {
            output[bucket[(a[i] / exp) % 10] - 1] = a[i];
            bucket[(a[i] / exp) % 10]--;
        }
        for (int i = 0; i < a.length; i++)
            a[i] = output[i];
        output = null;
        bucket = null;

    }

    private static void radixsort(int a[]) {
        int exp;
        int max = getMax(a);
        for (exp = 1; max / exp > 0; exp *= 10)
            countsort(a, exp);
    }
}
