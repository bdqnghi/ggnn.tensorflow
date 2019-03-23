 public static <E> void f(List<E> list, Comparator<E> comparator) {
    int h = 1;
    while(h < list.size()/3) {  
      h = 3*h + 1;  
    }

    while(h >= 1) {  
      for(int i = h; i < list.size(); i++) {  
        for(int j = i; j >= h && comparator.compare(list.get(j), list.get(j-h)) < 0; j-=h) {
          Swap.f(list, j, j-h);
        }
      }
      h /= 3;
    }
  }
