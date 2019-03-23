 public void sort(int[] values, String order) {
      this.order = order;
    final long startTime = System.nanoTime();
    
    if (values == null || values.length == 0){
      return;
    }
    this.numbers = values;
    number = values.length;
    quicksort(0, number - 1);
    executionTime = (System.nanoTime() - startTime) / 1000000;
  }
  
  public void print(){
      System.out.println("Quicksort " + this.order + ": aantal vergelijkingen (" + this.cComparisons + "), aantal swaps (" + this.cSwaps + "), uitvoertijd (" + this.executionTime  + "ms)");
      
      System.out.println();
  }

  private void quicksort(int low, int high) {
    int i = low, j = high;
    
    
    int pivot = numbers[low];

    
    while (i <= j) {
      
      
      while (numbers[i] < pivot) {
        i++;
        this.cComparisons++;
      }
      
      
      while (numbers[j] > pivot) {
        j--;
        this.cComparisons++;
      }

      
      
      
      
      
      if (i <= j) {
        exchange(i, j);
        i++;
        j--;
      }
    }
    
    if (low < j)
      quicksort(low, j);
    if (i < high)
      quicksort(i, high);
  }

  private void exchange(int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
    this.cSwaps++;
  }