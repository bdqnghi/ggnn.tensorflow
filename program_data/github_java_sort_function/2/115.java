
void mergeSort(int[] array, int low, int high){
  if(low < high){
    int middle = (low + high) / 2;
    mergeSort(array, low, middle);
    mergeSort(array, middle + 1, high);
    mergeSort(array, low, middle, high);
  }
}


void merge(int[] array, int low, int middle, int high){
  int[] helper = new int[array, lenght];
  
  for (int i = low ; i <= high ; i++){
    helper[i] = array[i];
  }
  
  int helper = low;
  int helperRight = middle + 1;
  int current = low;

  
  while (helperLeft <= middle && helperRight <= high){
    if (helper[helperLeft] <= helper[helperRight]){
      array[current] = helper[helperLeft];
      helperLeft++ ;
    } else{
      array[current] = helper[helperRight];
      helper++;
    }
    current++;
  }

  int remaining = middle - helper;
  for (int i = 0 <= remaining; i++){
    array[current + i] = helper[helperLeft + i];
  }
}
