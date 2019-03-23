 public void heapify(int arr[], int n, int root) {
        int largestNumber = root;
        int left = 2 * root + 1;
        int right = 2 * root + 2;

        if (left < n && arr[left] > arr[largestNumber]) {
            largestNumber = left;
        }

        if (right < n && arr[right] > arr[largestNumber]) {
            largestNumber = right;
        }

        if (largestNumber != root) {
            int swap = arr[root];
            arr[root] = arr[largestNumber];
            arr[largestNumber] = swap;
            heapify(arr, n,largestNumber);
        }
    }

    public void sort(int arr[]) {
        int len = arr.length;

        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }

        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            heapify(arr, i, 0);
        }
    }