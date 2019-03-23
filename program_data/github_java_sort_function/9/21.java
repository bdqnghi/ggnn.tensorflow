 public static int[] selectionSort(int[] unsorted, int n) {

    
    
    for(int i=0; i < unsorted.length; i++) {
      int max = unsorted[i]; 
      for(int j=i+1; j < unsorted.length; j++) {
        System.out.println("max: " + max);
        System.out.println("compared: " + unsorted[j]);
        if( max > unsorted[j] ) {
          unsorted = swap(unsorted,i,j);
        }
      }
    }

    return unsorted;

  }

  public static int[] swap(int[] list, int indexA, int indexB) {

    int temp = list[indexB];
    list[indexB] = list[indexA];
    list[indexA] = temp;

    return list;

  }