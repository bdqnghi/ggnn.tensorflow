void main()
{
	int m,n,i,j,min=1;
	int a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	if(m>n) min=n;
	else min=m;
	for(i=0;i<min;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>-1000)
			{
				printf("%d\n",a[i][j]);
				a[i][j]=-10000;
			}
			else continue;
		}
		for(j=0;j<m;j++)
		{
			if(a[j][n-1-i]>-1000)
			{
				printf("%d\n",a[j][n-1-i]);
				a[j][n-1-i]=-10000;
			}
			else continue;
		}
		for(j=n-1;j>=0;j--)
		{
			if(a[m-1-i][j]>-1000)
			{
				printf("%d\n",a[m-1-i][j]);
				a[m-1-i][j]=-10000;
			}
			else continue;
		}
		for(j=m-1;j>=0;j--)
		{
			if(a[j][i]>-1000)
			{
				printf("%d\n",a[j][i]);
				a[j][i]=-10000;
			}
			else continue;
		}
	}
}