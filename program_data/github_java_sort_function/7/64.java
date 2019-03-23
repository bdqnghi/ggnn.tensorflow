
  public int[] sort() {
    double d;
    int d1 = array.length;
    while (d1 >= 1) {
      d = Math.ceil(d1 / 2);
      d1 = (int) d;
      for (int x = 0; x < d1; x++) {
        
        for (int i = x + d1; i < array.length; i += d1) {
          int temp = array[i];
          int j = i - d1;
          for (; j >= 0; j -= d1) {
            if (temp < array[j]) {
              array[j + d1] = array[j];
              array[j] = temp;
            }
          }
        }
        
      }
    }
    return array;
  }