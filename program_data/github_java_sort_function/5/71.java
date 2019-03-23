  public static void bubblesort(double[] arr) {
    boolean didSwap;
    do {
      didSwap = false;
      for (int i = 0; i < arr.length - 1; i++) {
        if (arr[i] > arr[i + 1]) {
          double temp = arr[i + 1];
          arr[i + 1] = arr[i];
          arr[i] = temp;
          didSwap = true;
        }
      }
    } while (didSwap);
  }