  public static void sort(int[] arr) {
        sort(arr, 0, arr.length-1);
    }
    
    private static void sort(int[] arr, int left, int right) {
        if (left >= right) return;
        int mid = (left + right) / 2;
        sort(arr, left, mid);
        sort(arr, mid+1, right);
        merge(arr, left, right);  
    }
    
    private static void merge(int[] arr, int left, int right) {
        int l = left;
        int mid = (left + right) / 2;
        int midRight = mid + 1;
        int index = 0;
        int[] tmp = new int[right-left+1];
        while(left <= mid && midRight <= right) {
            if (arr[left] <= arr[midRight]) {
                tmp[index] = arr[left];
                left++;
            } else {
                tmp[index] = arr[midRight];
                midRight++;
            }
            index++;
        }
        for (int i = 0; i < tmp.length; i++) {
            arr[i+l] = tmp[i];
        }
    }