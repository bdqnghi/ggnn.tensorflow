public <T extends Comparable<T>> void sort(T[] arr, int n) {
        int h = 1;
        while (h < n / 3) {
            h = 3 * h + 1; 
        }
        while (h >= 1) {
            
            
            for (int i = h; i < n; i++) {
                T e = arr[i];
                int j;
                for (j = i; j >= h && Utils.aLb(e, arr[j - h]); j -= h) {
                    arr[j] = arr[j - h];
                }
                arr[j] = e;
            }
            h=h/3;
        }
    }