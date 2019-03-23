
  public int[] selectionSort(int[] arr){
    int n = arr.length;
    for(int i=0;i<n-1;i++){
      int index=i;
      for(int j=i+1;j<n;j++){
        if(arr[j] < arr[index]){
          index=j;
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
      }
    }
    return arr;
  }
