public static void sort(int [] arr) {
        buildMaxHeap(arr);

        for(int i = 0; i < arr.length; i++) {
            extractMax(arr, arr.length-i);
        }
    }

    public static void buildMaxHeap(int [] arr) {
        if(arr.length <= 1)
            return;

        for(int i = (arr.length/2)-1; i >= 0; i--) {
            maxHeapify(arr, i, arr.length);
        }
    }

    public static void extractMax(int [] arr, int size) {
        if(size > 1) {
            swap(arr, 0, size-1);
            maxHeapify(arr, 0, size-1);
        }
    }

    public static void maxHeapify(int [] arr, int i, int n) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int j = n, max = Integer.MIN_VALUE;
        boolean swap = false;
        if(l < n && arr[i] < arr[l]) {
            max = arr[l];
            j = l;
            swap = true;
        }

        if(r < n && arr[i] < arr[r]) {
            if(arr[r] > max) {
                max = arr[r];
                j = r;
                swap = true;
            }
        }

        if(swap == true) {
            swap(arr, i, j);
            if(j < n/2)
                maxHeapify(arr, j, n);
        }   
    }

    public static void swap(int [] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }