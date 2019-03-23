 public static void sort(int a[]) {
        final int N = a.length;
        
        
        for (int i = 0; i < N - 1; i++) {
            
            int indexOfMin = i;
            for (int j = i + 1; j < N; j++) {
                if (a[j] < a[indexOfMin]) {
                    indexOfMin = j;
                }
            }
            if (i != indexOfMin){
                exch(a, i, indexOfMin);
            }
        }
    }

    private static void exch(int a[], int i, int j) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
