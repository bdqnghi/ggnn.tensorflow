    public int left(int i) {
        return (2*i);
    }
    
    public int right(int i) {
        return (2*i + 1);
    }
    
    public int parent(int i) {
        return (int)Math.floor(i/2);
    }
    
    public void swap(int a[], int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    public void maxHeapify(int a[], int i) {
        int l = left(i);
        int r = right(i);
        int largest;
        if(l <= heap_size && a[l] > a[i])
            largest = l;
        else
            largest = i;
        if(r <= heap_size && a[r] > a[largest])
            largest = r;
        if(largest != i) {
            swap(a, i, largest);
            maxHeapify(a, largest);
        }
        
    }
    
    
    public void buildMaxHeap(int a[], int n) {
        for(int i = (int)Math.floor(n/2); i >= 1; i--) {
            maxHeapify(a,i);
        }
    }
    
    public void heapSort(int a[], int n) {
        buildMaxHeap(a, n);
        for(int i = n; i>=2; i--) {
            swap(a, 1, i);
            heap_size --;
            maxHeapify(a,1);
        }
        
    }
    