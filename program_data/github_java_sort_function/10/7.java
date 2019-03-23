package com.shzhangji.algs4.sort;

import java.util.Arrays;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;


public class Bucket {

    public static void sort(int[] a) {

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; ++i) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        int[] buckets = new int[max + 1];
        for (int i = 0; i < a.length; ++i) {
            buckets[a[i]]++;
        }

        int i = 0;
        for (int j = 0; j < buckets.length; ++j) {
            for (int k = 0; k < buckets[j]; ++k) {
                a[i++] = j;
            }
        }

    }

    public static void main(String[] args) {
        int[] a = StdIn.readAllInts();
        sort(a);
        StdOut.println(Arrays.toString(a));
    }

}
