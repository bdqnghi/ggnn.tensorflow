

int peak(int a[MAX][MAX],int i,int j)
{
	if(a[i][j]>=a[i-1][j]
		&&a[i][j]>=a[i+1][j]
		&&a[i][j]>=a[i][j-1]
		&&a[i][j]>=a[i][j+1])
		return 1;
	else
		return 0;
}

void main()
{
	int a[MAX][MAX],m,n,i,j;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			a[i][j]=0;

	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);

	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(peak(a,i,j)){
				printf("%d %d\n",i-1,j-1);
			}
}