package com.jason;


public class RadixSort {

    
    public static int[] radixSort(int[] array) {
        
        int maximum = ArrayUtil.getMaximum(array);
        int digitsNumber = NumberUtil.getDigitsNumber(maximum);
        int[] temporaryArray = array;
        
        for (int position = 1; position <= digitsNumber; position++) {
            temporaryArray = CountingSort.countingSortByPosition(temporaryArray, position);
        }
        return temporaryArray;
    }

}