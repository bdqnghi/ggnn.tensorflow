package PukyungUniv;

import static org.junit.Assert.assertEquals;

import java.util.Arrays;

import org.junit.Test;

public class Sort_HeapSort {

    private static int getLeftChildIdx(int parent) {
        return (parent + 1) * 2 - 1;
    }

    private int getParentIdx(int child) {
        if (child < 1) {
            return -1;
        } else {
            return (child + 1) / 2 - 1;
        }
    }

    private static void maxHeapify(int[] data, int i, int end) {
        int leftChild = getLeftChildIdx(i);
        while (leftChild <= end) {
            int largeChild;
            if (leftChild == end) {
                largeChild = leftChild;
            } else {
                largeChild = data[leftChild] > data[leftChild + 1] ? leftChild : leftChild + 1;
            }
            if (data[i] >= data[largeChild]) {
                return;
            }
            swap(data, i, largeChild);
            i = largeChild;
            leftChild = getLeftChildIdx(i);
        }
    }

    private static void swap(int[] data, int i, int j) {
        int t = data[i];
        data[i] = data[j];
        data[j] = t;
    }

    public static void sort(int[] data) {
        makeHeap(data);
        sortFromHeap(data);
    }

    private static void makeHeap(int[] data) {
        for (int i = data.length / 2 - 1; i >= 0; i--) {
            maxHeapify(data, i, data.length - 1);
        }
    }

    private static void sortFromHeap(int[] data) {
        int last = data.length - 1;
        while (last > 0) {
            swap(data, 0, last);
            last--;
            maxHeapify(data, 0, last);
        }
    }

}
