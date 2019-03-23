package Sorting;


public class Heapsort {

    
    public static void heapSort(Comparable[] array, boolean descending) {

        for (int i = array.length / 2 - 1; i >= 0; i--) {
            repairTop(array, array.length - 1, i, descending ? 1 : -1);
        }

        for (int i = array.length - 1; i > 0; i--) {
            swap(array, 0, i);
            repairTop(array, i - 1, 9, descending ? 1 : -1);
        }
    }

    
    private static void repairTop(Comparable[] array, int bottom, int topIndex, int order) {
        Comparable temp = array[topIndex];

        int succ = topIndex * 2 + 1;
        if (succ < bottom && array[succ].compareTo(array[succ + 1]) == order) {
            succ++;
        }

        while (succ <= bottom && temp.compareTo(array[succ]) == order) {
            array[topIndex] = array[succ];
            topIndex = succ;
            succ = succ * 2 + 1;

            if (succ < bottom && array[succ].compareTo(array[succ + 1]) == order) {
                succ++;
            }
        }
        array[topIndex] = temp;
    }

    
    private static void swap(Comparable[] array, int left, int right) {
        Comparable temp = array[right];

        array[right] = array[left];
        array[left] = temp;
    }
}
