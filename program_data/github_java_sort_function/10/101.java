public static void bucketSort(BucketSortDataWrap[] data 
        , int min , int max)
    {
        System.out.println("��ʼ����");
        
        int arrayLength = data.length;
        BucketSortDataWrap[] tmp = new BucketSortDataWrap[arrayLength];
        
        
        int[] buckets = new int[max - min]; 
        
        for(int i = 0 ; i < arrayLength ; i++)
        {
            
            buckets[data[i].data - min]++;
        }
        System.out.println( Arrays.toString(buckets));
        
        for(int i = 1 ; i < max - min; i++)
        {
            
            buckets[i] = buckets[i] + buckets[i - 1];
        }
        
        
        
        System.out.println( Arrays.toString(buckets));
        
        System.arraycopy(data, 0, tmp, 0, arrayLength);
        
        for(int k = arrayLength - 1 ; k >=  0 ; k--)
        {
            data[--buckets[tmp[k].data - min]] = tmp[k];
        }
    }