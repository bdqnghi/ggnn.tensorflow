void radixsort(int[] a) { 
    int n = a.length;
    int[] b0 = new int[n];
    int[] b1 = new int[n];
    int n0, n1;

    for (int i=0; i<32; i++) {
        n0 = n1 = 0;
        for (int j=0; j<n; j++) {
            if (a[j] & (1<<i)) { 
                b1[n1] = a[j];
                n1 = n1+1;
            } else {
                b0[n0] = a[j];
                n0 = n0+1;
            }
        }
    }
    for (int j=0; j<n0; j++)
        a[j] = b0[j];
    for (int j=0; j<n1; j++)
        a[n0+j] = b1[j];
}