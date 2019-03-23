    public int[] sort(int[] arr){
        int n = arr.length;
        for(int i=0; i<n-1; i++){
            //Assume the minmum value index as i
            int min_index = i;

            //Traverse from i+1 to n and find the min value index
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[min_index])
                    min_index = j;
            }

            //Swap the min value index and the i
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        return arr;
    }