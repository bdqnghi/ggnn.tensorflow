int main()
{
	int m,n,a[22][22]={0};
	int i,j,t;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			t=a[i][j];
			if(t>=a[i-1][j]&&t>=a[i][j-1]&&t>=a[i+1][j]&&t>=a[i][j+1])
				printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}