 private static void selectionSort(int[] ar) {
    for (int i = 0; i < ar.length; i++) {
      int min = ar[i];
      int index = i;
      for (int j = i + 1; j < ar.length; j++) {
        if (ar[j] < min) {
          min = ar[j];
          index = j;
        }
      }
      int swap = ar[i];
      ar[i] = min;
      ar[index] = swap;
      System.out.print(ar[i] + " ");
    }
  }