public class InsertionSortAlgo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Integer[] A={5,2,4,6,1,3};  //Data set - Array A
		
		for(int i=1; i<A.length; i++){  // start picking up the data to compare
			
			int key=A[i];
			
			int j=i-1;   
			
			System.out.println("Key : "+key);  //printing the key values to understand the flow
			
			/*
			 * Compare condition/ sorting condition. Start from position 0 till the end and compare the A[j] and key value
			 */
			while(j>=0 && A[j]>key){
				
				A[j+1]=A[j];   // find the appropiate pos. and place the value
				
				j--;
			}
			
			A[j+1]=key;
			
			//Printing the array
			PrintArray(A);
			
		}
		
		
	}

}
