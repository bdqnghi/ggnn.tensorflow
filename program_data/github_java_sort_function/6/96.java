package Sorting;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class RadixSort {
public static void main(String[] args) {
	int n[]=new int[]{15,3,0,2,4,11,0,25,2,3,21,4,35,6};
	sort(n);
	System.out.println(Arrays.toString(n));
}
public static void sort(int []input)
{ final int RADIX = 10;
	List<Integer>[] bucket = new ArrayList[RADIX];
	  for (int i = 0; i < bucket.length; i++) {
	    bucket[i] = new ArrayList<Integer>();
	  }
	 
	  
	  boolean condition = false;
	  int tmp = -1, placement = 1;
	  while (!condition) {
		  condition = true;
	    
	    for (Integer i : input) {
	      tmp = i / placement;
	      bucket[tmp % RADIX].add(i);
	      if (condition && tmp > 0) {
	    	  condition = false;
	      }
	    }
	    System.out.println("bucket");
	    System.out.println(Arrays.toString(bucket));
	    
	    int a = 0;
	    for (int b = 0; b < RADIX; b++) {
	      for (Integer i : bucket[b]) {
	        input[a++] = i;
	      }
	      bucket[b].clear();
	    }
	    System.out.println(Arrays.toString(input));
	    
	    placement *= RADIX;
	  }
}
}
