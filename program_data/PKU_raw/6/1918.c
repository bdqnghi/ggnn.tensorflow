int main()
{																
	int a[100][100],k,i,j,t,m,n,sum;
	scanf("%d",&k);												
	for (t = 1;t <= k;t++)
	{
		sum = 0;
		scanf("%d%d",&m,&n);
		for (i = 1;i <= m;i++)
			for (j = 1;j <= n;j++)
				scanf("%d",&a[i][j]);
		for (i = 2;i < n;i++) sum += a[1][i] + a[m][i];
		for (j = 2;j < m;j++) sum += a[j][1] + a[j][n];
		sum += a[1][1] + (n != 1)*a[1][n] + (m != 1)*a[m][1] + (m != 1)*a[m][n];
		if (t < k ) printf("%d\n",sum);
		else printf("%d",sum);
	}
	return 0;
}