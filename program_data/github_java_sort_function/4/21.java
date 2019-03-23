public void sortII(int[] arr) {
        for(int i = arr.length / 2 - 1; i>=0; i--) {
            heapifyII(arr, arr.length, i);
        }
        for(int i = arr.length -1; i>=0; i--) {
            swap(arr, 0, i);
            heapifyII(arr, i, 0);
        }
    }
    
    private void heapifyII(int[] arr, int size, int i) {
        int l = 2*i + 1;
        int r = 2*i + 2;
        int largest = i;
        
        if(l < size && arr[l] > arr[largest]) {
            largest = l;
        } 
        if(r < size && arr[r] > arr[largest]) {
            largest = r;
        }
        if(largest != i) {
            swap(arr, largest, i);
            heapifyII(arr, size, largest);
        }
    }

    private void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main (String[]  args) {
        HeapSort hs = new HeapSort();
        int[] arr = new int[]{1,77, 0, 89,5,60};
        hs.sortII(arr);
        System.out.println();
        for(Integer each : arr) {
            System.out.print(each+" - ");
        }
    }