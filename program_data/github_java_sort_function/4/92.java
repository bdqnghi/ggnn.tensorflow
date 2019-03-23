package com.learn.algorithms.sort;

import java.util.Arrays;

public class HeapSortMaxHeap {
	

    
    
	
	private static void swap(Comparable[] input,int IndexOne,int IndexTwo){
		Comparable tmp = input[IndexOne];
		input[IndexOne] = input[IndexTwo];
		input[IndexTwo] = tmp;
	}
	
	private static void heapsort(Comparable[] input){
		int size=input.length;
		
		for(int i=size/2-1;i>=0;i--)
		    heapify(input,i,size);
		
		System.out.println("After heapifying\n");
		System.out.println(Arrays.toString(input));
		
	   
	   
	   
	   for(int i = size-1;i>=0;i--){
		   Comparable tmp = input[0];
		   input[0]=input[i];
		   input[i]=tmp;
		   
		   heapify(input,0,i);
	   }
				
	}
	
	
	
	private static void heapify(Comparable[]input,int index,int size){
	   int largestIndex = index;
	   
	   if(hasLeft(index,size) && input[largestIndex].compareTo(input[getLeftChildIndex(index)])<0)
		   largestIndex = getLeftChildIndex(index);
	   
	   if(hasRight(index,size) && input[largestIndex].compareTo(input[getRightChildIndex(index)]) < 0)
		   largestIndex = getRightChildIndex(index);
		   
	   if(largestIndex != index) 
	   {
		   swap(input,index,largestIndex);
		   heapify(input, largestIndex,size);
	   }
		    
	}
	

}
