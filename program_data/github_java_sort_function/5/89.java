package com.candifood.sorting;




public class BubbleSort {

    public static void main(String[] args) {

        int i, pass;
        int[] x = {20, 15, 12, 30, -5, 72, 456};

        for (pass = 0; pass <= x.length - 2; pass++) {

            for (i = 0; i <= x.length - pass - 2; i++) {
                if (x[i] > x[i + 1]) {
                    int temp = x[i];
                    x[i] = x[i + 1];
                    x[i + 1] = temp;
                }
            }
        }
        for (i = 0; i < x.length; i++) {
            System.out.println(x[i]);
        }

    }
}
