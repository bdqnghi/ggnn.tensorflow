int main()
{
	int m, n, i, j, k;
	scanf("%d,%d", &m, &n);
	int a[8][8], max[8]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max[i])
			{
				max[i]=a[i][j];
				k=j;
			}
		}
		int p=0;
		for(j=0;j<m;j++)
		{
			if(max[i]<a[j][k])
			{
				p++;
			}
		}
		if(p==m-1)
		{
			printf("%d+%d", i, k);
			return 0;
		}
	}
	printf("No");
	return 0;
}