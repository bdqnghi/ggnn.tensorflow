static void sort(int[] array, int left, int right){
        if(left >= right){
            return;
        }
        int pivotIndex = partition(array, left, right);
        sort(array, left, pivotIndex -1);
        sort(array, pivotIndex+1, right);
    }

    static void swap(int x, int y){
        int temp = x;
        x = y;
        y = temp;
    }
    static int partition(int[] array, int left, int right){

        int pivot = array[right];
        int partitionIndex = left;
        int tempData;
        for(int i = left ; i < right ; i++){
            if( array[i] > pivot){
                
                
            }else{
                tempData = array[i];
                array[i] = array[partitionIndex];
                array[partitionIndex] = tempData;
                partitionIndex++;
            }
        }
        tempData = array[partitionIndex];
        array[partitionIndex] = array[right];
        array[right] = tempData;

        return partitionIndex;
    }