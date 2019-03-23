  private void swapArrayElements(int[] array, int indexa, int indexb){
    int tmp = array[indexa];
    array[indexa] = array[indexb];
    array[indexb] = tmp;
  }

  private int partition(int[] array, int low, int high){
    int pivot = array[high];
    int result;
    int left = low;
    int right = high-1;

    while(left<right){
      while(left<right && array[left] < pivot){ left++; }
      while(left<right && array[right] >= pivot){ right--; }
      if(left!=right){ swapArrayElements(array,left,right); }
    }

    if(array[left] >= pivot) {
      swapArrayElements(array,left,high);
      result = left;
    } else {
      result = high;
    }

    return result;
  }

  public void quickSort(int[] arrayToSort,int low,int high){
    if(low>=high){return;}

    int pivotPosition = partition(arrayToSort,low,high);
    quickSort(arrayToSort, low, pivotPosition-1);
    quickSort(arrayToSort, pivotPosition+1, high);
  }
