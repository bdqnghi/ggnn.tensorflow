
    public void quickSortHelper(int[] num, int left, int right) {
        
        if(left >= right) return;
        int pivot = partition(num, left, right);
        quickSortHelper(num, left, pivot - 1);
        quickSortHelper(num, pivot + 1, right);
    }

    int partition(int[] num, int left, int right){
        int pivot = right;
        System.out.print("pivot: " + pivot);
        
        int i = left;

        System.out.print(" left: " + num[i]);

        while(i < pivot){
            while(i < pivot && num[pivot] >= num[i]){
                i++;
            }
            if(i < pivot){
                swap(num, i , pivot-1);
                swap(num, pivot, pivot-1);
                pivot--;
            }
        }
        return pivot;
    }

    public void swap(int[] num, int i, int j){
        int tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }