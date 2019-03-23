 
  public static  <T extends Comparable<? super T>> int sort(T[] a) { 
    
    writes = 0;
    int N = a.length;
    int h = 1;
    while (h < N/3) h = 3*h + 1; 
    while (h >= 1) { 
      for (int i = h; i < N; i++) { 
        for (int j = i; j >= h && less(a[j], a[j-h]); j -= h)
          exch(a, j, j-h);
      }
      h = h/3;
    }
    return writes;
  }