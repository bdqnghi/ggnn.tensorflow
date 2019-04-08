int main()
{
	int n,a[300],count;
	int i,j,k;
	scanf("%d",&n);
	count=n;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				for(k=i;k>0;k--) a[k]=a[k-1];					
				count--;
			}
		}
	}
	for(i=n-count;i<n-1;i++) printf("%d,",a[i]);
	printf("%d",a[n-1]);
	return 0;
}