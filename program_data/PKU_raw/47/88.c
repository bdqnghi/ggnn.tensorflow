void main()
{
	int k,i,j,n,m,t,a[100];
	scanf("%d\n",&n);
	for(k=0;k<n;k++)
	{		scanf("%d",&m);
		a[k]=m;
	}
	for(i=0;i<(n+1)/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(j=0;j<n-1;j++)
		printf("%d ",a[j]);
	printf("%d",a[n-1]);
}