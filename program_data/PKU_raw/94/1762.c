int main(){
	int N,i,j,k,e;
	int a[100],b[100];
	k=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			b[k]=a[i];
			k=k+1;
		}
	}
	for(j=1;j<=k;j++){
		for(i=0;i<k-j;i++){
			if(b[i]>b[i+1]){
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
			}
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[k-1]);
	return 0;
}