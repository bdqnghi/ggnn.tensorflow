static void insertionSort(int[] arr) {
    if (arr == null || arr.length <= 0) {
      return;
    }
    for (int i = 0; i < arr.length; i++) {
      insertValue(arr, i);
    }
  }

  
  static void insertValue(int[] arr, int index) {
    if (index <= 0) {
      return;
    }
    int insertIndex = index;
    int value = arr[index];
    for (int i = index-1; i >= 0; i--) {
      if (value < arr[i]) {
        slide(arr, i);
        insertIndex = i;
      } else {
        break;
      }
    }
    arr[insertIndex] = value;
  }

  
  static void slide(int[] arr, int index) {
    if (index+1 >= arr.length) {
      return; 
    }
    arr[index+1] = arr[index];
  }