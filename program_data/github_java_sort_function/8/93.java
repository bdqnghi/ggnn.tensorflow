
   public static void quickSort(int arr[], int x, int y) {
      if (x >= y) {
         return;
      }
      int pivot = partition(arr, x, y);
      quickSort(arr, x, pivot);
      quickSort(arr, pivot + 1, y);
   }

   public static int partition(int arr[], int x, int y) {
      int pivot = arr[x];
      while (x < y) {
         while (arr[x] < pivot) {
            x++;
         }
         while (arr[y] > pivot) {
            y--;
         }
         swapNumbers(x, y, arr);
      }
      return x;
   }

   private static void swapNumbers(int x, int y, int[] arr) {
      int temp = arr[x];
      arr[x] = arr[y];
      arr[y] = temp;
   }