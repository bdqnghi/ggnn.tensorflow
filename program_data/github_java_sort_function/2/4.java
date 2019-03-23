void mergeSort(int[] n, int s, int e){
	if(n==null || n.length==0)
		return;
	if(s<e){
		int m = (s+e)/2;
		mergeSort(n, s, m);
		mergeSort(n, m+1, e);
		merge(n, s, m, e);
	}
}

void merge(int[] n, int s, int m, int e){
	int[] n1 = new int[m-s+1];
	int[] n2 = new int[e-m];
	n1 = Arrays.copyOfRange(n, s, m+1); 
	n2 = Arrays.copyOfRange(n, m+1, e+1); 

	int k=s, i=0, j=0;
	for(; k<=e && i<n1.length && j<n2.length; k++){
		if(n1[i]<n2[j]){
			n[k] = n1[i++];
		}else{
			n[k] = n2[j++];
		}
	}
	while(i<n1.length){
		n[k++] = n1[i++];
	}
	while(j<n2.length){
		n[k++] = n2[j++];
	}
}