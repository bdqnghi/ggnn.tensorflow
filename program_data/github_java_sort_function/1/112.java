package algorithms.sort;

public class SortInsertionSort {
	
	
public static void main(String args[]){
		
		int arr[] = {30,6,2,3,4,6,7,8,10,20,11,5,5,30};
		
	    int n = arr.length;
	    
	    
	    for (int i=1; i<n; i++)
        {
            int key = arr[i]; 
             
            int j = i-1;
            
            
            while (j>=0 && arr[j] > key)  
            {
                arr[j+1] = arr[j];
                
                j--;
            }
            
            arr[j+1] = key;            
        }
	    
	    
	  System.out.println(" Sorted Array: " );  
	  
	  for(int m=0; m < n; m++){
		  
		  System.out.print(" "+ arr[m]);
	  }
	  			
	}

}
