package com.changwen.javabase.DataStructure.Sort;

import java.util.ArrayList;
import java.util.List;


public class RadixSort {


    public int[] radixSort(int[] array) {
        
        int max = 0;
        for (int anArray : array) {
            if (max < anArray) {
                max = anArray;
            }
        }
        
        int times = 0;
        while(max>0){
            max = max/10;
            times++;
        }
        
        List<ArrayList> queue = new ArrayList<ArrayList>();
        for (int i = 0; i < 10; i++) {
            ArrayList queue1 = new ArrayList();
            queue.add(queue1);
        }
        
        for (int i = 0; i < times; i++) {
            
            for (int j = 0; j < array.length; j++) {
                int x = array[j]%(int)Math.pow(10, i+1)/(int)Math.pow(10, i);
                ArrayList queue2 = queue.get(x);
                queue2.add(array[j]);
                queue.set(x,queue2);
            }
            
            int count = 0;
            for (int j = 0; j < 10; j++) {
                while(queue.get(j).size()>0){
                    ArrayList<Integer> queue3 = queue.get(j);
                    array[count] = queue3.get(0);
                    queue3.remove(0);
                    count++;
                }
            }
        }
        return array;
    }


}
