package com.example.edwin.multithread;




import android.support.v4.app.INotificationSideChannel;

import java.io.*;
import java.util.*;

class Radix {

    
    static int getMax(int arr[], int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }

    
    
    static void countSort(int arr[], int n, int exp)
    {
        int output[] = new int[n]; 
        int i;
        int count[] = new int[10];
        Arrays.fill(count,0);

        
        for (i = 0; i < n; i++)
            count[ (arr[i]/exp)%10 ]++;

        
        
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        
        for (i = n - 1; i >= 0; i--)
        {
            output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
            count[ (arr[i]/exp)%10 ]--;
        }

        
        
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    
    
    static void radixsort(int arr[], int n)
    {
        
        int m = getMax(arr, n);

        
        
        
        for (int exp = 1; m/exp > 0; exp *= 10)
            countSort(arr, n, exp);
    }

    
    static void print(int arr[], int n)
    {
        for (int i=0; i<n; i++)
            System.out.print(arr[i]+" ");
    }


    
    public static void main (String[] args)
    {
        int arr[] = {170, 45, 75, 90, 802, 24, 2, 66,23402384,2342,12,3451235,1222};
        int arr2[] = {214,4362,12321,656,121,312,34,5,21,1,23,123,4,6,83};
        int n = arr.length;
        int n2 = arr.length + arr2.length;
        radixsort(arr, n);
        radixsort(arr2,n);

        ArrayList<Integer> arr3 = new ArrayList<>();
        ArrayList<Integer> arr4 = new ArrayList<>();
        for(int i:arr){
            arr3.add(i);
        }
        for(int j:arr2){
            arr4.add(j);
        }


        System.out.println(MedianThread.sortMerge(arr3,arr4));




















        
    }
}
