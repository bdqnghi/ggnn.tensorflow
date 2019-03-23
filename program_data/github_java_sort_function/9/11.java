package ru.spbstu.appmath.gurevich;

import java.util.Arrays;
import java.util.Comparator;

public class Selectionsort<T> implements Sort<T> {

    public T[] sort(T[] array, Comparator<T> comp) {
        T temp;
        T[] result = Arrays.copyOf(array, array.length);
        for (int i = result.length - 1; i > 0; i--) {
            int first = 0;
            for (int j = 1; j <= i; ++j) {
                if (comp.compare(result[j], result[first])<=0)
                    first = j;
            }
            temp = result[first];
            result[first] = result[i];
            result[i] = temp;
        }
        return result;
    }
}