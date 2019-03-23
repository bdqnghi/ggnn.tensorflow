import java.util.Scanner;


public class insertionsort {
	 public static void main(String a[]){    
	     int key,j;
		 Scanner s = new Scanner(System.in);
	        System.out.print("Enter no. of elements you want in array:");
	         int no = s.nextInt();
	         
	        int arrays[] = new int[no];
	        System.out.println("Enter all the elements:");
	        for(int i = 0; i < no; i++)
	        {
	            arrays[i] = s.nextInt();
	        }
	        
	        System.out.println("Array Before Sorted...");
	        for(int i = 0; i < no; i++)
	        {
	           System.out.println(arrays[i]);
	        }
	        
	         for(int i=1;i<arrays.length;i++)
	         {
	        	 key=arrays[i];
	        	 j=i;
	        	 while(j>0 && arrays[j-1]>key)
	        	 {
	        		 arrays[j]=arrays[j-1];
	        		 j--;
	        	 }
	        	 arrays[j]=key;
	         }
	        
	        
	        System.out.println("Sorted Array...");
	         for (int c = 0; c < ( no ); c++)
	      	  System.out.println(arrays[c]);
	         s.close();
	    }  
	       
	   
	       
	    }    
	   


