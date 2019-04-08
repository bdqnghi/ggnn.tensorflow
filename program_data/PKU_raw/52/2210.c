int main() {
	int sz[100],n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int e;
	for(int k=n-m;k<n;k++){
		for(int j=k;j>k-n+m;j--){
			e=sz[j];
			sz[j]=sz[j-1];
			sz[j-1]=e;
		}
	}
	for(int c=0;c<n-1;c++){
		printf("%d ",sz[c]);
	}
	printf("%d",sz[n-1]);
	return 0;
}

