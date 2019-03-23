public static int[] quickSort(int[] data){
        int lenD = data.length;
        int pivot = 0;
        int ind = lenD/2;
        int i,j = 0,k = 0;
        if(lenD<2){
            return data;
        }
        else{
            int[] L = new int[lenD];
            int[] R = new int[lenD];
            int[] sorted = new int[lenD];
            pivot = data[ind];
            for(i=0;i<lenD;i++){
                if(i!=ind){
                    if(data[i]<pivot){
                        L[j] = data[i];
                        j++;
                    }
                    else{
                        R[k] = data[i];
                        k++;
                    }
                }
            }
            int[] sortedL = new int[j];
            int[] sortedR = new int[k];
            System.arraycopy(L, 0, sortedL, 0, j);
            System.arraycopy(R, 0, sortedR, 0, k);
            sortedL = quickSort(sortedL);
            sortedR = quickSort(sortedR);
            System.arraycopy(sortedL, 0, sorted, 0, j);
            sorted[j] = pivot;
            System.arraycopy(sortedR, 0, sorted, j+1, k);
            return sorted;
        }
    }