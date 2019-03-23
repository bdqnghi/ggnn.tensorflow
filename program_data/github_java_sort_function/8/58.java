    public void quickSort(int a[], int low, int high) {
         if(low < high) {
            int p = partition(a, low, high);
            quickSort(a, low, p - 1);
            quickSort(a, p + 1, high);
         }
    }
    public void swap(int a[], int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    public int partition(int a[], int low, int high) {
        int pivot = a[high];
        int i = low - 1;
        for(int j = low; j <= high - 1; j++) {
            if(a[j] <= pivot) {
                i++;
                swap(a, i, j);
            }
        }
        swap(a, i + 1, high);
        return (i + 1);
    }
    