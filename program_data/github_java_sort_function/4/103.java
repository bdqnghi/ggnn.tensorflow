private static void heapSort(int[] a) {
        
        
        for (int i = a.length / 2 - 1; i >= 0; i--) {
            heapify(a, a.length-1, i);
        }
        
        for(int i=0;i<a.length-1;i++)
        {
            heapify(a, a.length-1, i);
        }
        
        

    }

    private static void heapify(int[] a,int n, int i) {
        

        int l = 2 * i+1;
        int r = 2 * i + 2;

        int min = i;

        if (l <= n && a[i] > a[l]) {
            min = l;
        }

        if (r <= n && a[r] < a[min]) {
            min = r;
        }

        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            heapify(a, n ,min);
        }

    }
