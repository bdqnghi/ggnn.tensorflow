



public class HeapSort {
    private Integer[] arrayHeap;
    private Integer comparable;
    
    public HeapSort()
    {
        comparable =0;
    }
            
    public int compareTo(Object o) {
        Integer num1 = (Integer) o;
        return comparable.compareTo(num1); 
        
    }
    
    public void heapSort(Integer arr[])
    {
        int n = arr.length;
 
        
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);
 
        
        for (int i=n-1; i>=0; i--)
        {
            
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
 
            
            heapify(arr, i, 0);
        }
        arrayHeap = arr;
    }
 
    
    void heapify(Integer arr[], int n, int i)
    {
        int largest = i;  
        int l = 2*i + 1;  
        int r = 2*i + 2;  
 
        
        if (l < n && arr[l] > arr[largest])
            largest = l;
 
        
        if (r < n && arr[r] > arr[largest])
            largest = r;
 
        
        if (largest != i)
        {
            int swap = arr[i];
            arr[i] = arr[largest];
            arr[largest] = swap;
 
            
            heapify(arr, n, largest);
        }
    }
    public Integer[] getHeapArray()
    {
        return arrayHeap;
    }
}
