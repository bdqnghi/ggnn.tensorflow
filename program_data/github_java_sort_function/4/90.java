import java.util.*;

public class Example {



   public static void heapSort(int[] arr) {

      int size = arr.length;

      for (int i = size / 2 - 1; i >= 0; i--) {
         heapify(i, arr, size);
      }

      for (int i = arr.length - 1; i >= 0; i--) {
         swap(arr, 0, i);
         size = size - 1;
         heapify(0, arr, size);
      }

   }

   public static void heapify(int i, int[] arr, int size) {
      int largestIndex = i;

      int leftIndex = leftChild(i);
      if (leftIndex < size && arr[leftIndex] > arr[largestIndex]) {
         largestIndex = leftIndex;
      }

      int rightIndex = rightChild(i);
      if (rightIndex < size && arr[rightIndex] > arr[largestIndex]) {
         largestIndex = rightIndex;
      }

      if (largestIndex != i) {
         swap(arr, i, largestIndex);
         heapify(largestIndex, arr, size);
      }
   }

   static int leftChild(int i) {
      return 2 * i + 1;
   }

   static int rightChild(int i) {
      return 2 * i + 2;
   }

   static void swap(int[] arr, int index1, int index2) {
      int temp = arr[index1];
      arr[index1] = arr[index2];
      arr[index2] = temp;
   }   
}


