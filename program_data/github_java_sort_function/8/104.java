public static void quicksort(int[] array, int l, int r){        
        int i = 0;
        int j = 0;
        int pivot = 0;
        int tmp = 0;
        if (l < r){
            i = l;
            j = r;
            pivot = array[(l + r) / 2];
            while (i <= j){
                assert isSorted(array,i);
                while(array[i] < pivot){                    
                    i++;
                }
                while(array[j] > pivot){                    
                    j--;
                }
                if (i <= j) {                               
                    tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                    i++;
                    j--;
                }
            }
            quicksort(array,l,j);
            quicksort(array,i,r);
        }
    }