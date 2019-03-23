  private static int[] shellSort(int[] ar, int h) {
    for (int i = h; i < ar.length; i += h) {
      for (int j = i; j > 0; j -= h) {
        if (ar[j - h] > ar[j]) {
          int buf = ar[j];
          ar[j] = ar[j - h];
          ar[j - h] = buf;
        } else {
          break;
        }
      }
    }
    return ar;
  }