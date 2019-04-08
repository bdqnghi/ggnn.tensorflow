int main(){
	int n,i,j,k=0;
	scanf("%d",&n);
	int *zs;
	zs=(int*)malloc(sizeof(int)*n);
	for(i=3;i<=n;i++){
		int c=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==0){
			zs[k]=i;
			k++;
		}
	}
	int count=0;
	for(i=0;i<k;i++){
		for(j=i;j<k;j++){
			if(zs[j]-zs[i]==2){
				count++;
				printf("%d %d\n",zs[i],zs[j]);
			}
		}
	}
	if(count==0){
		printf("empty");
	}
	free(zs);
	return 0;
}