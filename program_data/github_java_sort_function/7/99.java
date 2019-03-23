    private void sort(int[] a) {
        int dk = a.length/2;
        while( dk >= 1  ){
            shellSort(a, dk);
            dk = dk/2;
        }

    }

    private void shellSort(int[] a, int dk) {
        for(int i=dk;i<a.length;i++){
            if(a[i]<a[i-dk]){
                int j;
                int x=a[i];
                a[i]=a[i-dk];
                for(j=i-dk;  j>=0 && x<a[j];j=j-dk){
                    a[j+dk]=a[j];
                }
                a[j+dk]=x;
            }

        }

    }
