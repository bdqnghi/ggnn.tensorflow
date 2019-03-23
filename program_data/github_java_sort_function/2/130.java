package book.ch4;

import cse131.ArgsProcessor;
import sedgewick.StdIn;
import sedgewick.StdOut;



public class Merge {

    public static void sort(Comparable[] a) {
        sort(a, 0, a.length);
    } 

    
    public static void sort(Comparable[] a, int lo, int hi) {
        int N = hi - lo;        

        
        if (N <= 1) return; 

        
        int mid = lo + N/2; 
        sort(a, lo, mid); 
        sort(a, mid, hi); 

        
        Comparable[] aux = new Comparable[N];
        int i = lo, j = mid;
        for (int k = 0; k < N; k++) {
            if      (i == mid)  aux[k] = a[j++];
            else if (j == hi)   aux[k] = a[i++];
            else if (a[j].compareTo(a[i]) < 0) aux[k] = a[j++];
            else                               aux[k] = a[i++];
        }

        
        for (int k = 0; k < N; k++) {
            a[lo + k] = aux[k]; 
        }
    } 



   
    private static boolean isSorted(Comparable[] a) {
        for (int i = 1; i < a.length; i++)
            if (a[i].compareTo(a[i-1]) < 0) return false;
        return true;
    }

   
    public static void show(Comparable[] a) {
        for (int i = 0; i < a.length; i++)
            System.out.println(a[i]);
    }


    public static void main(String[] args) {
    	ArgsProcessor.useStdInput("datafiles/textfiles");
        String[] a = StdIn.readAll().split("\\s+");
        Merge.sort(a);
        for (int i = 0; i < a.length; i++) {
            StdOut.print(a[i] + " ");
        }
        StdOut.println();
    }
}
