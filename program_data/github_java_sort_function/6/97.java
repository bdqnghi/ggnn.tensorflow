package com.ccsi.sorts;

import java.util.ArrayList;
import java.util.List;


public class RadixSort {
    public static void main(String[] args) {
        int[] nums={342,356,58,576,123};
        radixSort(nums);
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
    }
    public static void radixSort(int[] nums){
        if(nums==null||nums.length<=1)return;
        int max=Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            max=max>nums[i]?max:nums[i];           
        }

        int count=0;                               
        while(max>0){
            max/=10;
            count++;
        }

        int dev=10;
        for (int i = 0; i < count; i++) {
            List<Integer>[] buckets=new ArrayList[10];   
            for (int j = 0; j < 10; j++) {               
                buckets[j]=new ArrayList<>();
            }

            for (int j = 0; j < nums.length; j++) {      
                int idx=nums[j]%dev*10/dev;
                buckets[idx].add(nums[j]);
            }

            int index=0;
            for (int j = 0; j < 10; j++) {               
                for (Integer ele:buckets[j]
                     ) {
                    nums[index++]=ele;
                }
            }
            dev*=10;                                     
        }
    }
}
