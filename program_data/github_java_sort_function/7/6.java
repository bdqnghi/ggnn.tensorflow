   private static int[] sort(int[] arr, int n) {
        int i, j, h, x;
        
        for(h = 1; h < n; h = 3 * h + 1);
        h /= 9;
            
        if(h == 0)
            h++;

        while(h > 0) {
            for(j = n - h - 1; j >= 0; j--) {
                x = arr[j];
                i = j + h;
                while((i < n) && (x > arr[i])) {
                    arr[i - h] = arr[i];
                    i += h;
                }
                arr[i - h] = x;
            }
            h /= 3;
        }
        return arr;
    }