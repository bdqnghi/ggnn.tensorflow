public static void bucketSort(int[] arr, int max) {
      int[] bucket = new int[max + 1];

      for (int i = 0; i < bucket.length; i++) {
         bucket[i] = 0;
      }

      for (int i = 0; i < arr.length; i++) {
         bucket[arr[i]]++;
      }

      int x = 0;
      for (int i = 0; i < bucket.length; i++) {
         for (int j = 0; j < bucket[i]; j++) {
            arr[x++] = i;
         }
      }
   }