void main()
{
	int a[100][100]={0};
	int m,n ,i,j;
	scanf("%d %d",&m,&n);
	for(i=j=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=j=0;i<=n+m-2;i++)
		for(j=0;j<=i;j++)
			if(j>=0&&j<m&&i-j>=0&&i-j<n)
				printf("%d\n",a[j][i-j]);
}