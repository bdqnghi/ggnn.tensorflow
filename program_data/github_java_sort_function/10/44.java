public static int[] bucketSort(int[] arr){
        
        int bucketNum = 10;
        Integer[][] buckets = new Integer[bucketNum][arr.length];
        for (int num : arr){
            int bucketIdx = num / 10;
            
            for (int j = 0; j < arr.length; j++){
                if (buckets[bucketIdx][j] == null){
                    buckets[bucketIdx][j] = num;
                    break;
                }
            }
        }

        
        
        for (int i = 0; i < buckets.length; i++){
            
            for (int j = 1; j < buckets[i].length; ++j){
                if(buckets[i][j] == null){
                    break;
                }
                int value = buckets[i][j];
                int position = j;
                while (position > 0 && buckets[i][position-1] > value){
                    buckets[i][position] = buckets[i][position-1];
                    position--;
                }
                buckets[i][position] = value;
            }
        }
        int k = 0;
        
        for (int i = 0; i < bucketNum; i++){
            for (int j = 0; j < buckets[i].length; j++){
                if (null == buckets[i][j]){
                    continue;
                }
                arr[k++] = buckets[i][j];
            }
        }
        return arr;
    }

    