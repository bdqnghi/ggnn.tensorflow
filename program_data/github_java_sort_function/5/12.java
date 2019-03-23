public static int[] bubbleSort(int arr[]){
    int n = arr.length;
    boolean swapped = false;
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        counter++;
        if(arr[j]>=arr[j+1]){
          swapped = true;
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
      if(swapped)break;break;
    }

    return arr;
  }
