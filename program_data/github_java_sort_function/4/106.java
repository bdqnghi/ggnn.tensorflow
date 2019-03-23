public long sort(int arr[]) {
        long time1, time2;
        int n = arr.length;

        time1 = System.nanoTime();

        
        for (int i = 1; i < n; i++)
            insert(arr, i);

        
        for (int j = n - 1; j >= 0; j--)
            delete(arr, j);
        time2 = System.nanoTime();

        return (time2 - time1);
    }

    
    private void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    
    private void insert(int arr[], int i) {
        int parent;
        while (i > 0) {
            if (i % 2 == 0)
                parent = i / 2 - 1;
            else
                parent = i / 2;

            
            if (arr[parent] < arr[i]) {
                swap(arr, parent, i);
                i = parent;
            }
            else
                break;
        } 
    }

    
    private void delete(int arr[], int l) {
        int parent, largest, left, right;
        swap(arr, 0, l); 

        
        largest = 0; 
        parent = largest;
        while (largest <= l / 2 - 1) {
            left = largest * 2 + 1;
            right = left + 1;

            
            if (left < l && arr[left] > arr[largest])
                largest = left;
            if (right < l && arr[right] > arr[largest])
                largest = right;

            if (largest != parent) {
                swap(arr, largest, parent);
                parent = largest;
                continue;
            }
            else
                break;
        } 
    } 