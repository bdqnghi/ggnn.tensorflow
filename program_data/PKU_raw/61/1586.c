int main()
{
	int n,i;
	int a[30],k[100];
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	for(i=2;i<20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[k[i]-1]);
	}
	return 0;
}