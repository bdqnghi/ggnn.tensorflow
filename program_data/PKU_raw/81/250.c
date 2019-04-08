int main()
{
	int a[6][5];
	int i, j, n, m;
	for (i = 0;i <= 4;i++)
		for (j = 0;j <= 4;j++)
			scanf("%d",&a[i][j]);			
	scanf("%d%d",&n,&m);
	if (n >= 0 && n <= 4 && m >= 0 && m <= 4)
	{
		for (i = 0;i <= 4;i++) 
		{	
			a[5][i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = a[5][i];
		}
	
		for (i = 0;i <= 4;i++)
			for (j = 0;j <= 4;j++)
			{
				if (j < 4)	printf("%d ",a[i][j]);
				else if (i < 4) printf("%d\n",a[i][j]);
				else printf("%d",a[i][j]);
			}
	}
	else printf("error"); 
	return 0;
}