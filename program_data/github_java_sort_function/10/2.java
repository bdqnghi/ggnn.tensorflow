    
    public static void bucketSort(int[] array,int max_value){
        int[] bucket=new int[max_value+1];
        for(int i=0;i<array.length;i++){
            bucket[array[i]]=bucket[array[i]]+1;
        }
        
        int index=0;
        for(int i=0;i<bucket.length;i++){
            for(int j=0;j<bucket[i];j++){
                array[index++]=i;
            }
        }
    }