import java.util.Arrays;

public class HeapSortSelectHeap {

    public enum Heap { MINHEAP, MAXHEAP };

    private Heap heap;

    public HeapSortSelectHeap(Heap heap) {
        this.heap = heap;
    }

    private void swap(int[] list, int i, int j) {
        int temp = list[j];
        list[j] = list[i];
        list[i] = temp;
    }

    private void siftDown(int[] list, int start, int end) {
        switch(heap) {
            case MINHEAP:
                siftDownMin(list, start, end);
                break;
            case MAXHEAP:
                siftDownMax(list, start, end);
                break;
        }
    }

    private void siftDownMin(int[] list, int start, int end) {
        int root = start;

        while(root * 2 + 1 <= end) {
            int child = root * 2 + 1;
            int swap = root;
            if(list[swap] > list[child]) {
                swap = child;
            }

            if(child + 1 <= end && list[swap] > list[child + 1]) {
                swap = child + 1;
            }

            if(swap != root) {
                swap(list, root, swap);
                root = swap;
            } else {
                return;
            }
        }
    }



    private void siftDownMax(int[] list, int start, int end) {
        int root = start;

        while(root * 2 + 1 <= end) {
            int child = root * 2 + 1;
            int swap = root;
            if(list[swap] < list[child]) {
                swap = child;
            }

            if(child + 1 <= end && list[swap] < list[child + 1]) {
                swap = child + 1;
            }

            if(swap != root) {
                swap(list, root, swap);
                root = swap;
            } else {
                return;
            }
        }
    }

    public void heapify(int[] list) {
        int start = (list.length - 2) / 2;
        while(start >= 0) {
            siftDown(list, start, list.length - 1);
            start -= 1;
        }
    }

    public void sort(int[] list) {
        heapify(list);
        int end = list.length - 1;
        while(end > 0) {
            swap(list, end, 0);
            end -= 1;
            siftDown(list, 0, end);
        }
    }

    public static void runList(int[] list, Heap heap) {
        System.out.println("before: " + Arrays.toString(list));
        HeapSortSelectHeap s = new HeapSortSelectHeap(heap);
        s.heapify(list);
        System.out.println("heap: " + Arrays.toString(list));
        s.sort(list);
        System.out.println("after: " + Arrays.toString(list));
    }


}
