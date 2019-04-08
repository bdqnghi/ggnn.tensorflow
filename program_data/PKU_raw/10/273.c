int main()
{
	int k;
	scanf("%d",&k);
		int a[25],i;
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);

	int b[25],j;
	b[k-1]=1;
	if(a[k-2]>=a[k-1])
		b[k-2]=2;
	else
		b[k-2]=1;
	int max;

	for(j=k-3;j>=0;j--)
	{
		max=0;
		for(i=j+1;i<=k-1;i++)
		{
			if(a[j]>=a[i] && b[i]>=max)
				max=b[i];
		}
		b[j]=max+1;
	}
	
	max=0;
	for(j=0;j<=k-1;j++)
	{
		if(b[j]>max)
			max=b[j];
	}
	printf("%d\n",max);
	
	return 0;
}