int main(){
	int n,i,j,k,x;
	scanf("%d",&n);
	k=1;
	int * a;
	int * b;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=1;i<=n;i++){
		scanf("%d ",&(a[i]));
	}
	for(i=1;i<=n;i++){
		if(a[i]%2!=0){
			b[k]=a[i];
			k++;
		}
	}
	for(i=1;i<=k;i++){
		x=b[i];
		for(j=i-1;j>=0&&b[j]>x;j--)
			b[j+1]=b[j];
		b[j+1]=x;
	}
	for(i=2;i<k;i++){
		printf("%d,",b[i]);
	}
	printf("%d",b[k]);
	free(a);
	free(b);
	return 0;
}