
    public void sort(int start){
        for (int j=0; j<= arrayOfBuckets.size(); j++){
            MinHeap heapBucket  = new MinHeap(bucket);
            heapBucket.HeapSort(bucket);
        }
    }
    
    public void display(){
        System.out.println("Sorted Bucket:");
        for (Integer num : arrayOfBuckets)
            System.out.println(arrayOfBuckets.get(num));
    }

    public BucketSort(int[] input, int BNumber){
        
        for (int value : input){
            if (value > max) max = input[value];
            else if (value <= min) min = input[value];
        }
        int bucketRange = (max-min)+1;
        bucketSize = bucketRange/BNumber;
        for (int i = 0; i <=input.length; i++) {
            arrayOfBuckets = new ArrayList<Integer>(bucketSize);
        }
        
        for (Integer val : inputArray){
            arrayOfBuckets.set(val, (val-min)/bucketRange);
        }
        





    }