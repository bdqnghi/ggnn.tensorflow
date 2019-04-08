int main()
{
	int n,k=0,i,m,e,l;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int *zz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		if(sz[i]%2==1){
			zz[k]=sz[i];
			k++;}
	}
	l=k;
	for(m=1;m<=l;m++){
		for(k=0;k<l-m;k++){
			if(zz[k+1]<zz[k]){
				e=zz[k];
				zz[k]=zz[k+1];
				zz[k+1]=e;
			}
	}
}
	for(k=0;k<l-1;k++){
		printf("%d",zz[k]);
		printf(",");
	}
	printf("%d",zz[l-1]);
	free(sz);
	free(zz);
	return 0;
}