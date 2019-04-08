
main(){
	int i, j, n, aa1, bb1, aa2, bb2, a[99][99];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(a[i][j]==0){
				aa1=i;bb1=j;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				aa2=i; bb2=j;
			}
		}
	}
	printf("%d", (aa2-aa1-1)*(bb2-bb1-1));
}