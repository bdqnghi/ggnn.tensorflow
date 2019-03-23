public static void mergeSort(int A[]) {
        mergeSort(A, 0, A.length - 1);
    }

    public static void mergeSort(int A[], int l, int r) {
        if(l < r) {
            int m = l + (r - l) / 2;

            mergeSort(A, l, m);
            mergeSort(A, m + 1, r);
            merge(A, l, m, r);
        }
    }

    public static void merge(int A[], int l, int m, int r) {
        int n1 = m - l + 1, n2 = r - m;

        int left[] = new int[n1];
        int right[] = new int[n2];


        for(int i = 0; i < n1; i++)
            left[i] = A[l + i];

        for(int i = 0; i < n2; i++) {
            right[i] = A[m + 1 + i];
        }

        int i = 0, j = 0, k = l;

        while(i < n1 && j < n2) {
            if(left[i] <= right[j]) {
                A[k] = left[i];
                i++;
            }

            else {
                A[k] = right[j];
                j++;
            }
            
            k++;

        }

        if(i == n1) {
            while(j < n2) {
                A[k] = right[j];
                j++;
                k++;
            }

        }

        if(j == n2) {
            while(i < n1) {
                A[k] = left[i];
                i++;
                k++;
            }
        }

        
        
    }