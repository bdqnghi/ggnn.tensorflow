package Lab04.A;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.StringTokenizer;


public class radixsort {

    private static final String INPUT_FILE_NAME = "radixsort.in";
    private static final String OUTPUT_FILE_NAME = "radixsort.out";

    private static void radixSort(String[] a, int w, int k) {

        int n = a.length;
        int size = 256;   
        String[] aux = new String[n];

        for (int d = w - 1; d >= w - k; d--) {

            int[] count = new int[size + 1];

            for (String anA : a) {
                count[anA.charAt(d) + 1]++;
            }

            for (int r = 0; r < size; r++) {
                count[r + 1] += count[r];
            }

            for (String anA : a) {
                aux[count[anA.charAt(d)]++] = anA;
            }

            System.arraycopy(aux, 0, a, 0, n);
        }
    }

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new FileReader(INPUT_FILE_NAME));

        StringTokenizer stringTokenizer = new StringTokenizer(in.readLine());

        int n = Integer.parseInt(stringTokenizer.nextToken());
        int m = Integer.parseInt(stringTokenizer.nextToken());
        int k = Integer.parseInt(stringTokenizer.nextToken());

        String[] array = new String[n];

        for (int i = 0; i < n; i++) {
            array[i] = in.readLine();
        }

        radixSort(array, m, k);

        PrintWriter out = new PrintWriter(OUTPUT_FILE_NAME);

        for (String s : array) {
            out.println(s);
        }

        in.close();
        out.close();
    }
}
