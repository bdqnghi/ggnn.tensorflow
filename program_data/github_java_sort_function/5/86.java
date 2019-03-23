public void bubbleSort(int[] arrayToSort){
    boolean swapped = true;
    for(int i = 0; i < arrayToSort.length && swapped; i++){
      swapped = false;
      for(int j = 0; j< arrayToSort.length - i; j++){
        if(arrayToSort[i] > arrayToSort[j]){
          swapArrayElements(arrayToSort,i,j);
          swapped = true;
        }
      }
      System.out.println("Sorting : Pass "+i);
      printArray(arrayToSort);
    }
  }

  