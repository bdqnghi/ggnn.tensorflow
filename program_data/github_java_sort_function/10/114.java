package com.company.sorting;


import java.util.*;

public class BucketSort {
    private Map<Integer,List<Integer>> buckets;

    private int noOfBuckets = 5;


    public BucketSort() {
        buckets = new HashMap<Integer, List<Integer>>();
        for (int i = 0; i < noOfBuckets; i++) {
            buckets.put(i, new ArrayList<Integer>());
        }
    }

    public void insert(int value) {
        Integer integer = new Integer(value);
        Integer bucketNumber = integer % noOfBuckets;

        if(value<25)bucketNumber=0;

        else if(value>=25 && value< 50)bucketNumber=1;
        else if(value>=50 && value< 100)bucketNumber=2;
        else if(value>=100 && value< 250)bucketNumber=3;
        else if(value>=250 )bucketNumber=4;

        if(buckets.get(bucketNumber)==null) {
            ArrayList<Integer> integerArrayList = new ArrayList<Integer>();
            integerArrayList.add(integer);
            buckets.put(bucketNumber, integerArrayList);
        }else{
            insertToBucket(buckets.get(bucketNumber),integer);
        }
    }

    public void insertToBucket(List<Integer> bucket,Integer value) {
        int i = bucket.size();
        bucket.add(value);
        while(i>0){
            if(bucket.get(i)<bucket.get(i-1)) {
                int temp = bucket.get(i);
                Integer integer = bucket.get(i - 1);
                bucket.set(i, integer);
                bucket.set(i - 1, temp);
            }
            i--;
        }
    }

    public void sortAllBuckets(){
        Set<Integer> integers = buckets.keySet();
        for (Integer key:integers) {
            List<Integer> integers1 = buckets.get(key);
            for (int i = 0; i < integers1.size(); i++) {
                System.out.print(integers1.get(i)+",");
            }
        }
    }
}

