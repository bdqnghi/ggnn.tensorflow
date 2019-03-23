  private static void bucketSort(int[] list) {
        int max = 0;

        
        
        for(int i = 0; i < list.length; i++) {
            max = Math.max(max , list[i]);
        }
        int bucketIncrement = (int)Math.pow(10 , String.valueOf(max).length() - 1);

        
        PriorityQueue<Integer>[] buckets = new PriorityQueue[10];

        
        for(int i = 0; i < list.length; i++) {
            int tempIndex = list[i] / bucketIncrement;
            if(buckets[tempIndex] == null) {
                buckets[tempIndex] = new PriorityQueue<>();
            }
            buckets[tempIndex].add(list[i]);
        }

        
        
        int indexOfList = 0;
        for(int i = 0; i < buckets.length; i++) {
            if(buckets[i] != null) {
                while(!buckets[i].isEmpty()) {
                    list[indexOfList] = buckets[i].poll();
                    indexOfList++;
                }
            }
        }
    }