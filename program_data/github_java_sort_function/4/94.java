

import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	void min_heapify(int []arr,int i,int n)
	{
		
		while(2*i+1 <n)
		{
			int left=2*i+1;
			int right=2*i+2;
			int min;
			
					
			
			if(right<n && arr[right]<arr[left])
			     min=right;
			else 
			    min=left;
			    
			if(arr[i]>arr[min]) 
			   {
			   	int temp=arr[i];
			   	arr[i]=arr[min];
			   	arr[min]=temp;
			   	
			   	i=min;
			   }
			 else
			    break;
			
			
		}
		
	}
	void build_min_heap(int []arr,int n)
	{
		
		for(int i=n/2-1;i>=0;i--)
		   min_heapify(arr,i,n);
		
	}
	void heap_sort(int []arr,int n)
	{
		build_min_heap(arr,n);
		
		System.out.println("after building heap");
		for(int elem:arr)
		System.out.print(elem+" ");
		
		   System.out.println();
		   int temp_n=n-1;
		for(int i=n-1;i>=0;i--)
		{
			
			int temp=arr[0];
			arr[0]=arr[i];
			arr[i]=temp;
		
			min_heapify(arr,0,temp_n);
			temp_n--;
			
		}
	}
	
}
