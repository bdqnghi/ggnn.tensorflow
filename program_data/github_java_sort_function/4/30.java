private static void buildMaxHeapify(int[] data) {
        
        int startIndex = getParentIndex(data.length - 1);
        
        for (int i = startIndex; i >= 0; i--) {
            maxHeapify(data, data.length, i);
            System.out.println(Arrays.toString(sort));
        }
        
    }

    
    private static void maxHeapify(int[] data, int heapSize, int index) {
        
        int left = getChildLeftIndex(index);
        int right = getChildRightIndex(index);

        int largest = index;
        if (left < heapSize && data[index] < data[left]) {
            largest = left;
        }
        if (right < heapSize && data[largest] < data[right]) {
            largest = right;
        }
        
        if (largest != index) {
            int temp = data[index];
            data[index] = data[largest];
            data[largest] = temp;
            maxHeapify(data, heapSize, largest);
        }
    }

    
    private static void heapSort(int[] data) {
        
        for (int i = data.length - 1; i > 0; i--) {
            int temp = data[0];
            data[0] = data[i];
            data[i] = temp; 
            maxHeapify(data, i, 0); 
            System.out.println(Arrays.toString(sort));
        }
    }

    
    private static int getParentIndex(int current) {
        return (current - 1) >> 1;
    }

    
    private static int getChildLeftIndex(int current) {
        return (current << 1) + 1;
    }

    
    private static int getChildRightIndex(int current) {
        return (current << 1) + 2;
    }

    private static void print(int[] data) {
        int pre = -2;
        for (int i = 0; i < data.length; i++) {
            if (pre < (int) getLog(i + 1)) {
                pre = (int) getLog(i + 1);
                System.out.println();
            }
            System.out.print(data[i] + " |");
        }
    }
