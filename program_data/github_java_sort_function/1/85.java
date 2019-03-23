public void insertionSort(int a[]){
        int i, key;
        for(int j = 1; j < a.length;j++){
            key = a[j];
            i = j - 1;
            while(i>=0 && a[i] > key) {
                a[i+1] = a[i];
                i = i - 1;
            }
            a[i + 1] = key;
        }   
    }
}