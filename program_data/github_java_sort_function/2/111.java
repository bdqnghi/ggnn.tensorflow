public void merge(int arr[], int l, int m, int r) {
        int len1 = m - l + 1;
        int len2 = r - m;
        int left[] = new int[len1];
        int right[] = new int[len2];
        System.out.println("Split original array into left and right array" +
        " with size " + len1 + " and " + len2 + " respectively.");
        for (int i = 0; i < len1; ++i) {
            left[i] = arr[l + i];
        }
        System.out.print("Left array: ");
        printArr(left);
        for (int j = 0; j < len2; ++j) {
            right[j] = arr[m + 1 + j];
        }
        System.out.print("Right array: ");
        printArr(right);
        int i = 0, j = 0;
        int k = l;
        while (i < len1 && j < len2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < len1) {
            arr[k] = left[i];
            i++;
            k++;
        }
        while (j < len2) {
            arr[k] = right[j];
            j++;
            k++;
        }
        System.out.print("Merge back the left and right array: ");
        printArr(arr);
        System.out.println("");
    }

    
    public void sort(int arr[], int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            sort(arr, l, m);
            sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
