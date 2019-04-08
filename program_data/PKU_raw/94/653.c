int main(){
	int n,k=0,i,j,e,l;
	scanf("%d",&n);
	int*sz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		if(sz[i]%2!=0){
			k++;
		}
	}
	int*sz2=(int*)malloc(sizeof(int)*k);
	j=0;
	for(i=0;i<n;i++){
		if(sz[i]%2!=0){
			sz2[j]=sz[i];
			j++;
		}
	}
	for(i=0;i<k;i++){
		for(l=0;l<k-i-1;l++){
			if(sz2[l]>sz2[l+1]){
				e=sz2[l];
				sz2[l]=sz2[l+1];
				sz2[l+1]=e;
			}
		}
	}
	for(i=0;i<k-1;i++){
		printf("%d,",sz2[i]);
	}
	printf("%d",sz2[k-1]);
	free(sz);
	free(sz2);
	return 0;
}