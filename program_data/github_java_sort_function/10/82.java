public void bucketSort(int[] data){
        int max = data[0] , min = data[0];
        for (int i = 0; i < data.length; i++) {
            if(max < data[i]){
                max = data[i];
            }
            if(min > data[i]){
                min = data[i];
            }
        }
        
        int bucketSize = (max - min + 1)/10 + 1;
        Node[] bucket = new Node[bucketSize];
        for (int i = 0; i < bucket.length; i++) {
            bucket[i] = new Node();
        }
        
        for (int i = 0; i < data.length; i++) {
            int k = (data[i] - min + 1)/10;
            bucket[k].node[bucket[k].num] = data[i];
            bucket[k].num++;
        }
        
        int pos = 0 ; 
        
        QuickSort qs = new QuickSort();
        for (int i = 0; i < bucket.length; i++) {
            qs.quickSortInt(bucket[i].node, bucket[i].num, 0, bucket[i].num-1);
            
            for (int j = 0; j < bucket[i].num; j++ , pos++) {
                data[pos] = bucket[i].node[j];
            }
        }
        
        
    }

}