void main()
{
	int m,n,i,j;
	int a[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max[8],min[8];
	for(i=0;i<m;i++)
	{
		max[i]=a[i][0];
		for(j=0;j<n;j++)
		{
			if(max[i]<a[i][j])
			{
				max[i]=a[i][j];
			}
		}
	}
	for(j=0;j<8;j++)
	{
		min[j]=a[0][j];
		for(i=0;i<m;i++)
		{
			if(min[j]>a[i][j])
			{
				min[j]=a[i][j];
			}
		}
	}
	int t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max[i]==min[j])
			{
				printf("%d+%d",i,j);
				t=1;
			}
		}
	}
	if(t==0)
	{
		printf("No");
	}
}