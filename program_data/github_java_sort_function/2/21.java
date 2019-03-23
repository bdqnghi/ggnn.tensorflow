   public static void mergeSort(int[] arr) {
      if (arr.length > 1) {
         int[] left = leftHalf(arr);
         int[] right = rightHalf(arr);

         mergeSort(left);
         mergeSort(right);

         mergeArrays(arr, left, right);
      }
   }

   public static int[] leftHalf(int[] arr) {
      int size = arr.length / 2;
      int[] left = new int[size];
      for (int i = 0; i < size; i++) {
         left[i] = arr[i];
      }
      return left;
   }

   public static int[] rightHalf(int[] arr) {
      int size1 = arr.length / 2;
      int size2 = arr.length - size1;
      int[] right = new int[size2];
      for (int i = 0; i < size2; i++) {
         right[i] = arr[i + size1];
      }
      return right;
   }

   public static void mergeArrays(int[] arr, int[] left, int[] right) {
      int i1 = 0;
      int i2 = 0;

      for (int i = 0; i < arr.length; i++) {
         if (i2 >= right.length || (i1 < left.length && left[i1] <= right[i2])) {
            arr[i] = left[i1];
            i1++;
         } else {
            arr[i] = right[i2];
            i2++;
         }
      }
   }