 public void sort(int[] arr, int beg, int end)
  {
    if(end <= beg){return;} 
    
    int pivot = partition(arr, beg, end); 
    sort(arr, beg, pivot - 1); 
    sort(arr, pivot + 1, end); 
  }
  
  public int partition(int[] arr, int beg, int end)
  {

    int left = beg; 
    int right = end; 
    int pivot = arr[(beg+end)/2];
    int pivotIndex;
    while(right > left)
    {
      while(arr[right] > pivot)
      { 
        right--; 
      }
      while(arr[left] < pivot)
      { 
        left++; 
      }
      if(left <= right)
      { 
        swap(arr, left, right);
        left++;
        right--; 
      }

    } 
    
    
    return (pivotIndex = left - 1);
  }