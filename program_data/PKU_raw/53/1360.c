int main()
{
	int a[300],i,j,b[300],n,e,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		e=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i>j){
				e=1;
			}
		}
		if(e==0){
			b[k]=a[i];
			k=k+1;
		}
	}
	for(i=0;i<k-1;i++){
		printf("%d",b[i]);
		printf(",");
	}
	printf("%d",b[k-1]);
	return 0;
}