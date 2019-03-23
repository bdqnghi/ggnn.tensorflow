
class HeapSort {
	
	public void sort(int arr[]){
		
		int len= arr.length;
		for(int i=len/2-1;i>=0;i--){
			minHeapify(arr,len,i);
		}
		System.out.println(Arrays.toString(arr));
		for(int i=0,lastInd=len-1;i<len;i++,lastInd--){
			System.out.println(arr[0]);
			int currentElement = arr[0];
			arr[0]=arr[lastInd];
			arr[lastInd]=currentElement;
			minHeapify(arr, lastInd, 0);
		}
	}

	private void minHeapify(int[] arr, int len, int i) {
		int min=i;
		int left=2*i+1;
		int right=2*i+2;
		
		if(left<len&&arr[left]<arr[min])
			min=left;
		if(right<len&&arr[right]<arr[min])
			min=right;
		if(min!=i){
			//System.out.println(Arrays.toString(arr)+" -before");
			int swap = arr[min];
			arr[min]=arr[i];
			arr[i]=swap;
			//System.out.println(Arrays.toString(arr)+" -after");
			minHeapify(arr, len, min);
		}
	}
}