

package radixsort_java;


public class RadixSort_Java {

    
    static int [] a = {99, 86, 48,61,93,62,91,94,41,67};
    static int size = 10;
    private static void radixSort(int maxDigit) {
        int b[][] = new int[10][10000];
        int len[] = new int[10];
        int h = 1;
        for (int i = 0; i < maxDigit; i++) {
            for (int j = 0; j < 10; j++) {
                len[j] = 0;
            }
            for (int j = 0; j < 10; j++) {
                int digit = a[j] / h % 10;
                b[digit][len[digit]++] = a[j];
            }
            int index = 0;
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < len[j]; k++) {
                    a[index++] = b[j][k];
                }
            }
            h *= 10;
        }
    }

}
