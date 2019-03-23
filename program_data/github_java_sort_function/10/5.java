private int getSubBucketIndex(int num){
        int bitOff = 3;
        while(bitOff >= 0){
            int offNum = num >> bitOff;
            offNum &= 0x1;
            if(offNum != 0){
                return bitOff;
            }
            bitOff--;
        }
        throw new RuntimeException("subBucketIndex is not found!");
    }
    
    public void sort(){
        for(int sortItem : sortArray){
            int bitOff = 28;
            while(bitOff >= 0){
                int offSortItem = sortItem >> bitOff;
                offSortItem &= 0xF;
                if(offSortItem != 0){
                    LeafBucket leafBucket = buckets[bitOff / 4];
                    int subBucketIndex = getSubBucketIndex(offSortItem);
                    leafBucket.add(subBucketIndex, sortItem);
                    break;
                }
                bitOff -= 4;
            }
        }
        
        for(LeafBucket leafBucket : buckets){
            System.out.println(leafBucket);
        }
    }