
void apple(int m,int n)
{
	int **a,i,j;
	a=(int**)malloc((m+1)*sizeof(int*));
	for(i=0;i<=m;i++) a[i]=(int*)malloc((n+1)*sizeof(int));
	for(i=1;i<=m;i++) a[i][1]=1;
	for(i=1;i<=n;i++) a[1][i]=1;
	for(i=2;i<=m;i++)
		for(j=2;j<=n;j++)
		{
			if(i>j) a[i][j]=a[i][j-1]+a[i-j][j];
			else if(i==j) a[i][j]=a[i][j-1]+1;
			else a[i][j]=a[i][j-1];
		}
	printf("%d\n",a[m][n]);
	free(a);
}

main()
{
	int t,m,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		apple(m,n);
	}
}