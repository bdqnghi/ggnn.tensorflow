int main()
{
	int i,j,k,t,m,n;
	int a[22][22]={0},b[20][20]={0};
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;

}