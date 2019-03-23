 public void sort() {
        for(int outter = size -1 ; outter > 1; outter--) {
            for (int inner = 0; inner < outter; inner++) {
                if ( array[inner] > array[inner+1]) {
                    swap( inner, inner+1);
                }
            }
        }
    }

    private void swap(int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;

    }
