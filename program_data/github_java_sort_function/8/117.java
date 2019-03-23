 
  public static <K> void quickSortInPlace(K[] S, Comparator<K> comp) {
    quickSortInPlace(S, comp, 0, S.length-1);
  }

  
  private static <K> void quickSortInPlace(K[] S, Comparator<K> comp,
                                                                   int a, int b) {
    if (a >= b) return;                
    int left = a;
    int right = b-1;
    K pivot = S[b];
    K temp;                            
    while (left <= right) {
      
      while (left <= right && comp.compare(S[left], pivot) < 0) left++;
      
      while (left <= right && comp.compare(S[right], pivot) > 0) right--;
      if (left <= right) {             
        
        temp = S[left]; S[left] = S[right]; S[right] = temp;
        left++; right--;
      }
    }
    
    temp = S[left]; S[left] = S[b]; S[b] = temp;
    
    quickSortInPlace(S, comp, a, left - 1);
    quickSortInPlace(S, comp, left + 1, b);
  }