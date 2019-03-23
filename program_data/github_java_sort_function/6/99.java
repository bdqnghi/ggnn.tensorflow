package com.shzhangji.algs4.sort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;


public class Radix {

    public static final int RADIX = 10;

    public static void sort(int[] a) {

        List<List<Integer>> buckets = new ArrayList<>(RADIX);
        for (int i = 0; i < RADIX; ++i) {
            buckets.add(new ArrayList<>());
        }

        boolean maxLength = false;
        int placement = 1;

        while (!maxLength) {

            maxLength = true;
            for (int i : a) {
                int tmp = i / placement;
                buckets.get(tmp % RADIX).add(i);
                if (maxLength && tmp > 0) {
                    maxLength = false;
                }
            }

            int i = 0;
            for (List<Integer> bucket : buckets) {
                for (int n : bucket) {
                    a[i++] = n;
                }
                bucket.clear();
            }

            placement *= RADIX;
        }

    }

}
