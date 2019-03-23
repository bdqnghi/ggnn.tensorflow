
class selectionsort{
	public static void main(String args[]){
		int A[] = new int[100];
		
		
		for(int i = 0;i < A.length -1;i++){
			A[i] = 0 + (int)(Math.random()*100 + 0);
		}

		
		for(int i = 0;i < A.length -1;i++){
			System.out.println(Integer.toString(A[i]));
		}

		
		for(int i = 0;i < A.length -1;i++){
			int minElement = A[i];
			int elemIndex = i;
			for(int j = i; j < A.length-1;j++){
				if(A[j] < minElement){
					minElement = A[j];
					elemIndex = j;
				}
			}

			
			if(elemIndex != i){
				
				int temp = A[elemIndex];
				A[elemIndex] = A[i];
				A[i] = temp;
			}
		}
		

		
		for(int i = 0;i < A.length -1;i++){
			System.out.println(Integer.toString(A[i]));
		}
	}
}