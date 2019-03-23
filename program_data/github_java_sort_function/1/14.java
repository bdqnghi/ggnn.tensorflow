package chapter2.insertion_sort;

import java.util.StringJoiner;

public class InsertionSort {
    private Integer[] array;

    public InsertionSort(Integer[] arrayToSort) {
        this.array = arrayToSort;
    }

    public void setArray(Integer[] array) {
        this.array = array;
    }

    public void sortByNonDecreasing() {
        for (int i = 1; i < array.length; i++) {
            Integer key = array[i];
            int j = i - 1;

            while (j >= 0 && array[j] > key) {
                array[j+1] = array[j];
                j--;
            }

            array[j+1] = key;
        }
    }

    public void sortByNonIncreasing() {
        for (int i = 1; i < array.length; i++) {
            Integer key = array[i];
            int j = i - 1;

            while (j >= 0 && array[j] < key) {
                array[j+1] = array[j];
                j--;
            }

            array[j+1] = key;
        }
    }

    @Override
    public String toString() {
        StringJoiner stringJoiner = new StringJoiner(",");

        for (Integer key : array) {
            stringJoiner.add(key.toString());
        }

        return stringJoiner.toString();
    }

    public static void main(String[] args) {
        Integer[] array = new Integer[] {0, 4, 5, 9, 2, 7, 1, 5, 3, 9, 9, 8, 0, 6};

        InsertionSort insertionSort = new InsertionSort(array);

        System.out.println(insertionSort);
        insertionSort.sortByNonDecreasing();
        System.out.println(insertionSort);

        insertionSort.setArray(array);
        System.out.println(insertionSort);
        insertionSort.sortByNonIncreasing();
        System.out.println(insertionSort);
    }
}