void main()
{
	int a[300]={0},b[300]={0};
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) a[j]=0;
			else continue;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[k]=a[i];
			k++;
		}
		else continue;
	}
	printf("%d",b[0]);
	for(i=1;i<=k-1;i++)
		printf(",%d",b[i]);
}