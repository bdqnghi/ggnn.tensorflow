  
    public void insertSort() {
        for (int i = 1; i < nElements; i++) {
            
            long temp = arr[i];
            
            int j;
            for (j = i - 1; j >= 0; j--) {
                if (temp < arr[j]) {
                    arr[j + 1] = arr[j];
                } else {
                    break;
                }
            }
            
            arr[j + 1] = temp;
        }
    }