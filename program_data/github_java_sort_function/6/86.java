package com.ccsi.sorts;

import java.util.ArrayList;
import java.util.List;


public class RadixSort {
    public static void main(String[] args) {
        int[] a={234,413,544,1,73,14};
        radixSort(a);
        for(int i:a) System.out.println(i);
    }

    public static void radixSort(int[] a){
        if(a==null||a.length<=1)return;
        int max=Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            max=Math.max(max,a[i]);
            
        }

        int count=0;
        while(max!=0){
            max/=10;
            count++;
        }

        int NUM=10;
        int dev=10;
        for (int i = 0; i < count; i++) {
            
            List<Integer>[] bucket=new ArrayList[NUM];
            for (int j = 0; j < NUM; j++) {
                bucket[j]=new ArrayList<>();   
            }

            for (int j = 0; j < a.length; j++) {
                
                bucket[a[j]%dev*10/dev].add(a[j]);
            }

            int idx=0;
            for (int j = 0; j < NUM; j++) {
                for(Integer val:bucket[j]){
                    a[idx++]=val;
                }

                if(idx==a.length)break;
            }
            dev*=10;
        }
    }
}
