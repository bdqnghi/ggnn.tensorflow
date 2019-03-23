 public static <K> void quickSort(Queue<K> S, Comparator<K> comp) {
    int n = S.size();
    if (n < 2) return;                       
    
    K pivot = S.first();                     
    Queue<K> L = new LinkedQueue<>();
    Queue<K> E = new LinkedQueue<>();
    Queue<K> G = new LinkedQueue<>();
    while (!S.isEmpty()) {                   
      K element = S.dequeue();
      int c = comp.compare(element, pivot);
      if (c < 0)                             
        L.enqueue(element);
      else if (c == 0)                       
        E.enqueue(element);
      else                                   
        G.enqueue(element);
    }
    
    quickSort(L, comp);                      
    quickSort(G, comp);                      
    
    while (!L.isEmpty())
      S.enqueue(L.dequeue());
    while (!E.isEmpty())
      S.enqueue(E.dequeue());
    while (!G.isEmpty())
      S.enqueue(G.dequeue());
  }

  
  
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