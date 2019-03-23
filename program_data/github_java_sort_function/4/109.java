
void HeapSort(int[] n){
	if(n==null || n.length<=1)
		return;
	int length = n.length;
	for(int i=length/2; i>=1; i--){ //start from 1 since i=2*s; need s start with 1 in HeapAdjust();
		HeapAdjust(n, i, length);
	}
	for(int i=length; i>1; i--){
		int temp = n[i-1]; //start from 1, need i-1
		n[i-1] = n[0];
		n[0] = temp;
		HeapAdjust(n, 1, i-1); //omit last i, start from 1
	}
}
