public <T extends Comparable<T>> void sort(T[] array) {
    int n = array.length;

    
    int h = 1;
    while (h < n / 3) {
      h = 3 * h + 1;
    }

    while (h >= 1) {
      for (int i = h; i < n; i++) {
        int j = i;
        while (j >= h && less(array[j], array[j - h])) {
          swap(array, j, j - h);
          j -= h;
        }
      }
      h /= 3;
    }
  }

  
  private <T extends Comparable<T>> void swap(T[] array, int i, int j) {
    T swap = array[i];
    array[i] = array[j];
    array[j] = swap;
  }

  
  private <T extends Comparable<T>> boolean less(T i, T j) {
    return i.compareTo(j) < 0;
  }