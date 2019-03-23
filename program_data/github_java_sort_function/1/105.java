package world;

public class Insertionsort {
	 public static String insertionSort(int array[]) {  
		 String s="";
	        int n = array.length;  
	        for (int j = 1; j < n; j++) {  
	            int key = array[j];  
	            int i = j-1;  
	            while ( (i > -1) && ( array [i] > key ) ) {  
	                array [i+1] = array [i];  
	                i--;  
	            }  
	            array[i+1] = key;  
	        }  
	        for(int k:array)
	        {
	       s=s+k;
	        }
	        System.out.println(s);
	       return s;
	        
}
}
