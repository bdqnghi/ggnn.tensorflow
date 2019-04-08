int main()
{
	int n,i,j,k,t;
	int a[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(j=1;j<n;j++){
		for(k=0;k<j;k++){
			if(a[j]==a[k])
				a[j]=0;
		}
		if(a[j])
			printf(" %d",a[j]);
	}
	return 0;
}
