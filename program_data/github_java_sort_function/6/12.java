
package sorting;


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






        
        for (i = 0; i < n; i++)
        {

            count[ (arr[i]/exp)%10 ]++;
        }
 
        
        
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];
 
        
      
        for (i = 0; i <n; i++)
        {
            output[--count[ (arr[i]/exp)%10 ]] = arr[i];
        }
 
        
        
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }
 
    
    
    static void radixsort(int arr[], int n)
    {
        
        print(arr, n);
        reduceBy1(arr, n);
        int m = getMax(arr, n);
        
        
        
        
        for (int exp = 1; m/exp > 0; exp *= 10)
        {
            System.out.println("exp :: " + exp);
            countSort(arr, n, exp);
              print(arr, n);
              System.out.println("--");
        }
         increaseBy1(arr, n);
    }
 
    
    static void print(int arr[], int n)
    {
        for (int i=0; i<n; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    
     static void reduceBy1(int arr[], int n)
    {
        for (int i=0; i<n; i++)
        {
            arr[i]--;
        }
    }
     
     static void increaseBy1(int arr[], int n)
    {
        for (int i=0; i<n; i++)
        {
            arr[i]++;
        }
    }
 
 
    
    public static void main (String[] args)
    {
        int arr[] = {40, 12, 45, 32, 33, 1, 22, 99, 98,100 };
        int n = arr.length;
        radixsort(arr, n);
        print(arr, n);
    }
}