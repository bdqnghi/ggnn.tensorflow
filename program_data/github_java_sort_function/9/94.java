    public static void selectionSort(int[] a,int n){
        // One by one move boundary of unsorted subarray
        for (int i=0;i<n-1;i++) {
            
            // Find the minimum element in unsorted array
            int min = i;
            for (int j=i+1;j<n;j++) {
                if(a[j]<a[min])
                    min = j;
            }

            //swap the found minimum element with the element at current position
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }