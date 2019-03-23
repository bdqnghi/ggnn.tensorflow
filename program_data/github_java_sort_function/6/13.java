package apps;

import java.io.IOException;
import java.util.Scanner;

import structures.Node;


public class Radixsort {

	
	Node<String> masterListRear;
	
	
	Node<String>[] buckets;
	
	
	int radix=10;
	
	
	public Radixsort() {
		masterListRear = null;
		buckets = null;
	}
	
	
	public Node<String> sort(Scanner sc) 
	throws IOException {
		
		if (!sc.hasNext()) 
		{ 
			return null;
		}
		
		
		radix = sc.nextInt();
		buckets = (Node<String>[])new Node[radix];
		
		
		createMasterListFromInput(sc);
		
		
		int maxDigits = getMaxDigits();
		
		for (int i=0; i < maxDigits; i++)  
		{
			scatter(i);
			gather();
		}
		
		return masterListRear;
	} 
	
	
	public void createMasterListFromInput(Scanner sc) 
	throws IOException 
	{
		
				Node<String> front = new Node<String>(sc.next(),null); 
				Node<String> ptr=front;
				Node<String> cLL=null; 
				
					while(sc.hasNext()) 
						{
						 cLL = new Node<String>(sc.next(),null);
						 ptr.next=cLL;
						 ptr=ptr.next; 
	 				    }
					 
					masterListRear=cLL; 
					masterListRear.next=front;
	}
	
	
	public int getMaxDigits() {
		int maxDigits = masterListRear.data.length();
		Node<String> ptr = masterListRear.next;
		while (ptr != masterListRear) {
			int length = ptr.data.length();
			if (length > maxDigits) {
				maxDigits = length;
			}
			ptr = ptr.next;
		}
		return maxDigits;
	}
	
	
	public void scatter(int pass) 
	{
		
				Node<String> temp=null;
				
				do 
					{ 
					  temp = masterListRear.next; 
			 		  int index=temp.data.length()-1-pass;
					  char tempCh;
					  int tempInt=0;
					  if(index>=0)
					  { 
						tempCh=temp.data.charAt(index); 
					    tempInt=Character.digit(tempCh,radix); 
					  }
			 	  
				 for(int x=0; x<buckets.length;x++) 
				    {  	   
					  if(index>=0) 
			           { 
						   if(tempInt == x)
						   {
							   if(buckets[x]==null) 
							   { 
								
								 Node<String> nextPtr=temp.next; 
								 temp.next=temp; 
								 System.out.println("When we add to an empty bucket " + temp.data);
								 buckets[x]=temp; 
								 masterListRear.next=nextPtr;
								 temp=nextPtr;  
								
								 break; 
							   }
							   
							   else 
							   {
							     Node<String> nextPtr=temp.next;  
								 temp.next=buckets[x].next;
								 System.out.println("When we add to a non empty bucket " + temp.data);
								 buckets[x].next=temp;
								 buckets[x]=temp; 								 
								 masterListRear.next=nextPtr; 
								 temp=nextPtr; 
								 break;
						       }  
						   }
						   
			          }
					
					  else
						{
						   if(buckets[0]==null) 
						   {
							Node<String> nextPtr=temp.next;
							temp.next=temp;
							System.out.println("Add to bucket 0 when index is negative " + temp.data);
							buckets[0]=temp; 
							masterListRear.next=nextPtr;  
							temp=nextPtr;
							break; 
						   }
						   else 
						   {
							 Node<String> nextPtr=temp.next;
							 temp.next=buckets[x].next;
							 System.out.println("Add to bucket 0 when index is negative and populated " + temp.data);
							 buckets[0].next=temp;
							 buckets[0]=temp;
							 masterListRear.next=nextPtr;
							 temp=nextPtr;
						     break; 
						   }
					   }	     
			     
				 }
			  } 
				
			 while(temp!=masterListRear); 
				
		     if(temp==masterListRear)  
		     {  
		       int tempIndex=temp.data.length()-1-pass;
		       int tempInt=0; 
		       
		       if(tempIndex>=0)
		       {     
			        if(tempIndex>=0)  
			    	{	
			        char tempCh=temp.data.charAt(tempIndex); 
				    tempInt=Character.digit(tempCh,radix); 
			    	}
				   for(int x=0; x<buckets.length;x++)
			    	{
				      if(tempInt==x)
			    	  {
			    		 if(buckets[x]==null)
			    		 {
			    			 temp.next=temp;
			    			 buckets[x]=temp;
			    			 System.out.println("The index is " + x);
			    			 System.out.println("Temp is " + temp.data + "Temp.next is " + temp.next.data); 
			    			 System.out.println("buckets[x] is " + buckets[x].data);
			    			 masterListRear=null;
			    			 break;
			    			 
			    		 }
			    		 else
			    		 {
			    			 System.out.println("The index is " + x);
			    			 temp.next=buckets[x].next; 
			    			 System.out.println("Temp is " + temp.data + " Temp.next is " + temp.next.data);
			    			 buckets[x].next=temp;
			    			 buckets[x]=temp; 
			    			 System.out.println("buckets[x] is " + buckets[x].data);
			    			 masterListRear=null;
			    			 break;  
			    		 }
			    	  }
				      
			    	}
		       } 
		       else 
		       {
		    	   if(buckets[0]==null)
			    	 {
		    		     temp.next=temp;
			   			 buckets[0]=temp;
			   			 System.out.println("Temp is " + temp.data + "Temp.next is " + temp.next.data);
			   			 temp.next=buckets[0]; 
			   			 masterListRear=null;
		    			 
			    	 }
			       else
			         {
			    		 temp.next=buckets[0].next; 
			    		 System.out.println("Temp is " + temp.data + " Temp.next is " + temp.next.data);
			    		 buckets[0].next=temp;
			    		 buckets[0]=temp;
			    		 masterListRear=null;
			    			 
			    	 }
			      }
		       	}
		      
		}
						
	
	 
   

	
	public void gather() 
	{
	    
		   Node<String> tempPtrFront=null;
		   Node<String> begin=null; 
		   for(int x=0; x<buckets.length;x++) 
		   {   
			   if(buckets[x]!=null) 
			   {
				 begin=buckets[x].next; 
				 tempPtrFront=buckets[x]; 
				 buckets[x]=null;  
				 break;
			   }
		   }

		   
		   Node<String> tempPtr=null; 
		   Node<String> tempPtrFront2=tempPtrFront; 
		   for(int x=0; x<buckets.length;x++)
		   {
			   if(buckets[x]!=null) 
			   {
				  tempPtr=buckets[x]; 
				  tempPtrFront2.next=tempPtr.next;  
				  tempPtrFront2=tempPtr; 
				  buckets[x]=null; 
			   }
		   }
		 
		 masterListRear=tempPtrFront2; 
		 masterListRear.next=begin;  
		  
		
    }
	
}

