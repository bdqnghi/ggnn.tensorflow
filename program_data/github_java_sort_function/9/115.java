  public static <T extends Comparable<? super T>> int sort(T[] a) { 
    
    writes = 0;
    int N = a.length; 
    for (int i = 0; i < N; i++) { 
      
      int min = i; 
      for (int j = i+1; j < N; j++)
        if (less(a[j], a[min])) min = j;
      exch(a, i, min);
    }
    return writes;
  }