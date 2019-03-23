package sort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import static sort.SortUtils.*;


public class HeapSort implements SortAlgorithm {


    private static class Heap<T extends Comparable<T>> {
        
        private T[] heap;

        
        public Heap(T[] heap) {
            this.heap = heap;
        }

        
        private void heapSubtree(int rootIndex, int lastChild) {
            int leftIndex = rootIndex * 2 + 1;
            int rightIndex = rootIndex * 2 + 2;
            T root = heap[rootIndex];
            if (rightIndex <= lastChild) { 
                T left = heap[leftIndex];
                T right = heap[rightIndex];
                if (less(left, right) && less(left, root)) {
                    swap(heap, leftIndex, rootIndex);
                    heapSubtree(leftIndex, lastChild);
                } else if (less(right, root)) {
                    swap(heap, rightIndex, rootIndex);
                    heapSubtree(rightIndex, lastChild);
                }
            } else if (leftIndex <= lastChild) { 
                T left = heap[leftIndex];
                if (less(left, root)) {
                    swap(heap, leftIndex, rootIndex);
                    heapSubtree(leftIndex, lastChild);
                }
            }
        }


        
        private void makeMinHeap(int root) {
            int leftIndex = root * 2 + 1;
            int rightIndex = root * 2 + 2;
            boolean hasLeftChild = leftIndex < heap.length;
            boolean hasRightChild = rightIndex < heap.length;
            if (hasRightChild) { 
                makeMinHeap(leftIndex);
                makeMinHeap(rightIndex);
                heapSubtree(root, heap.length - 1);
            } else if (hasLeftChild) {
                heapSubtree(root, heap.length - 1);
            }
        }

        
        private T getRoot(int size) {
            swap(heap, 0, size);
            heapSubtree(0, size - 1);
            return heap[size]; 
        }





    }

    @Override
    public <T extends Comparable<T>> T[] sort(T[] unsorted) {
       return sort(Arrays.asList(unsorted)).toArray(unsorted);
    }

    @Override
    public <T extends Comparable<T>> List<T> sort(List<T> unsorted) {
        int size = unsorted.size();

        @SuppressWarnings("unchecked")
        Heap<T> heap = new Heap<>(unsorted.toArray((T[]) new Comparable[unsorted.size()]));

        heap.makeMinHeap(0); 
        List<T> sorted =  new ArrayList<>(size);
        while (size > 0) {
            T min = heap.getRoot(--size);
            sorted.add(min);
        }

        return sorted;
    }



}
