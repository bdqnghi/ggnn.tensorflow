package com.github.tomdican.program.sort;

import com.github.tomdican.program.Util;


public class RadixSort2 {
    public static void sort(int[] input) {
        int maxBit = RadixSort2.getMaxBit(input);
        for (int i = 1; i <= maxBit; i++) {
           
             sortBit2(input,i);
        }
    }

    public static void sortBit2(int[] input, int bitLoc) {
        int[] radix = new int[10];
        int len = input.length;
        int[] temp = new int[len];
        for (int i = 0; i < len; i++) {
            int bit = RadixSort2.getDigital(input[i],bitLoc);
            radix[bit]++;
        }
        for (int i = 1; i < radix.length; i++) {
                radix[i] += radix[i - 1];
        }
        for (int j = len -1; j >= 0; j--) {
            int bit = RadixSort2.getDigital(input[j],bitLoc);
            temp[--radix[bit]] = input[j];
        }
        for (int i = 0; i < len; i++) {
            input[i] = temp[i];
        }
    }

    public static void sortBit(int[] input, int bitLoc) {
        int len = input.length;
        int[] temp = new int[len];

        int loc = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < len; j++) {
                int bit = RadixSort2.getDigital(input[j],bitLoc);
                if (bit == i) {
                    temp[loc++] = input[j];
                }
            }
        }
        for (int i = 0; i < len; i++) {
            input[i] = temp[i];
        }
    }

    public static int getDigital(int number, int bit) {
        int pow = (int)Math.pow(10,bit-1);
        return number/pow%10;
    }

    public static int getMaxBit(int[] input) {
        int max = 0;
        for (int i = 0; i < input.length; i++) {
            max = max > input[i] ? max : input[i];
        }
        for (int i = 1; i < 16; i++) {
            int pow = (int)Math.pow(10,i);
            int num = max/pow;
            if ( num == 0) {
                return i;
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        int[] intput = {10,2,6,22,13,23,111,21,227,912,1234};
        RadixSort2.sort(intput);
        Util.printArray(intput);
    }

}
