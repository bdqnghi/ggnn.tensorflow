
package heap;


import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.io.IOException;
import java.util.Scanner;

public class Heap {

    

        
        
    private int array[];
    public static int n; 
    
    public static void sort(int arr[])  
    {
            buildMaxHeap(arr);
            
            for(int i=arr.length-1; i>=0; i--){
                int temp=arr[0];
                arr[0] = arr[i];
                arr[i]= temp;

                n--;
                
                maxHeapify(arr,0);
		}
    }
    
    public static void maxHeapify(int[] arr, int i) 
    {
		int leftChild= (2*i)+1;
		int rightChild=(2*i)+2;
		
                int max;
                
                if((leftChild < n) && (arr[leftChild] > arr[i])) 
			max=leftChild;
                else max = i;
                
		if( (rightChild < n) && (arr[rightChild] > arr[max])) 
			max=rightChild;
		
                if(max!=i){
			int temp = arr[max];
			arr[max] = arr[i];
			arr[i] = temp;
                        maxHeapify(arr, max);
		}
	}  
    
    
    
    public static void buildMaxHeap(int [] array){
    
        n=array.length;
        
        for(int i=array.length/2; i>=0; i--){
            maxHeapify(array, i);
        }
    }
}
