int main()
{
	int a[100];
	int i,j,max=a[0],lmax=a[1],n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
		if(a[i]>max) max=a[i];
	}

	for(j=0;j<n;j++)
	{
		if(a[j]>lmax&&a[j]<max) lmax=a[j];
	}
	printf("%d\n%d",max,lmax);
	return 0;
}