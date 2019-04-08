void main()
{
	int a[25],max[25]={0},max1=0;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
		max[i]=1;
	max1=1;
	for(i=1;i<=n-1;i++)
		for(j=0;j<=i-1;j++)
		{
			if((a[j]>=a[i])&&(max[j]+1>max[i]))
				max[i]=max[j]+1;
			if(max[i]>max1)
				max1=max[i];
		}
	printf("%d\n",max1);
}