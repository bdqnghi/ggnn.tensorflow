  
    private static void merge(int[] arr, int p, int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;
        int[] left = new int[n1+1];
        int[] right = new int[n2+1];
        for (int i = 0; i < n1; i++) {
            left[i] = arr[p + i];
        }
        for (int i = 0; i < n2; i++) {
            right[i] = arr[q + i + 1];
        }
        left[n1] = Integer.MAX_VALUE;
        right[n2] = Integer.MAX_VALUE;
        int a = 0,b = 0;
        for (int i = p; i <= r; i++) {
            if(left[a] <= right[b]){
                arr[i] = left[a++];
            }else{
                arr[i] = right[b++];
            }
        }
    }

    
    public static void mergeSort(int[] arr, int p, int r){
        if(p < r){
            int q = (p + r) / 2;
            mergeSort(arr,p,q);
            mergeSort(arr,q + 1,r);
            merge(arr,p,q,r);
        }
    }