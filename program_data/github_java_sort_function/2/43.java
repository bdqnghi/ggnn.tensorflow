
    public static void sort(int[] A) {
        int[] temp = new int[A.length];
        int start = 0;
        int end = A.length - 1;
        mergeSort(A, start, end, temp);
    }

    private static void mergeSort(int[] A, int start, int end, int[] temp) {
        if (start >= end) {
            return;
        }

        int mid = start + (end - start) / 2;
        mergeSort(A, start, mid, temp);
        mergeSort(A, mid + 1, end, temp);
        merge(A, start, mid, end, temp);
    }

    private static void merge(int[] A, int start, int mid, int end, int[] temp) {

        int left = start;
        int right = mid + 1;

        
        int k = start;

        
        while (left <= mid && right <= end) {
            if (A[left] < A[right]) {
                temp[k++] = A[left++];
            } else {
                temp[k++] = A[right++];
            }
        }
        while (left <= mid) {
            temp[k++] = A[left++];
        }
        while (right <= end) {
            temp[k++] = A[right++];
        }

        
        for (k = start; k <= end; k++) {
            A[k] = temp[k];
        }
        
        
        
        
        
    }