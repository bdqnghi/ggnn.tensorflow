int i,j,a[22][22]={0};
int max(int i,int j);
void main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(max(i,j)==1)
				printf("%d %d\n",i-1,j-1);
}
int max(int i,int j)
{
	if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
		return 1;
	else
		return 0;
}