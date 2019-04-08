int main()
{
	int m,n,q,i,j,k,a[101][101],b[101][101],c[101][101]={0};
	cin>>m>>q;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=q;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>q>>n;
	for(i=1;i<=q;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=q;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			if(j==1)
				printf("\n%d",c[i][j]);
			else
				printf(" %d",c[i][j]);
		}
	}
	return 0;
}
