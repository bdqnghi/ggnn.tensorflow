 private void setSort(int[] input ){
        for (int sq = 1; sq < input.length; sq += sq){
            for (int j =0;j<input.length-sq;j += sq*2){
                setMergeSort(input,j,j+sq-1,Math.min(j+sq+sq,input.length-1));
            }
        }
    }
    private void setMergeSort(int[] input,int start,int mid , int end){
        int[] tem = new int[input.length];

       for ( int i = start; i <= end ; i ++){
           tem[i] = input[i];
       }
        int i= start,j=mid +1;
       for (int h = start;h<= end;h++){
           if (i > mid){
               input[h] = tem[j++];
           }else if(j > end){
               input[h] = tem[i++];
           } else if (tem[i] < tem[j]){
               input[h] = tem[i++];
           }else if (tem[i] > tem[j]){
               input[h] = tem[j++];
           }
       }
    }