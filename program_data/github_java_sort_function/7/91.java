package com.ozkuran.algorithms.sorts.shellsort;

import java.util.ArrayList;
import java.util.List;


public abstract class ShellSort<T extends Comparable<T>> {
    public static <T extends Comparable<T>> T[] sort(T[] input) {
        int increment = input.length / 2;
        while (increment > 0) {
            for (int i = increment; i < input.length; i++) {
                int j = i;
                T temp = input[i];
                while (j >= increment && input[j - increment].compareTo(temp) > 0) {
                    input[j] = input[j - increment];
                    j = j - increment;
                }
                input[j] = temp;
            }
            if (increment == 2) {
                increment = 1;
            } else {
                increment *= (5.0 / 11);
            }
        }
        return input;
    }
}
