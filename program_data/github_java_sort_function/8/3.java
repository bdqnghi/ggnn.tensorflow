
    public void partition(int[] quickSortArray, int front, int rear) {

        int pivot = (front+rear)/2;
        
        int i = front;
        int j = rear;
        
        while(i < j) {
            while(quickSortArray[i] <= quickSortArray[pivot] && i < pivot) {
                i++;
            }
            
            while(quickSortArray[j] >= quickSortArray[pivot] && j > pivot) {
                j--;
            }
            
            if(quickSortArray[i] > quickSortArray[pivot] && j > pivot) {
                int temp = quickSortArray[i];
                quickSortArray[i] = quickSortArray[j];
                quickSortArray[j] = temp;
            }
            else if(quickSortArray[i] > quickSortArray[pivot] && j == pivot) {
                int temp = quickSortArray[pivot];
                quickSortArray[pivot] = quickSortArray[i];
                quickSortArray[i] = quickSortArray[pivot-1];
                quickSortArray[pivot-1] = temp;
                pivot--;
            }
            
            if(quickSortArray[j] < quickSortArray[pivot] && i < pivot) {
                int temp = quickSortArray[j];
                quickSortArray[j] = quickSortArray[i];
                quickSortArray[i] = temp;
            }
            else if(quickSortArray[j] < quickSortArray[pivot] && i == pivot) {
                int temp = quickSortArray[pivot];
                quickSortArray[pivot] = quickSortArray[j];
                quickSortArray[j] = quickSortArray[pivot+1];
                quickSortArray[pivot+1] = temp;
                pivot++;
            }
        }       
        
        if((pivot - 1) - front > 0) {
            partition(quickSortArray, front, pivot-1);
        }
        
        if(rear - (pivot + 1) > 0) {
            partition(quickSortArray, pivot+1, rear);
        }       
    }
    