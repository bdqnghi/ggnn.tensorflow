int main()
{
	int a[5][9][9],i,j,k,l,m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
				a[i][j][k]=0;
		}
	}
	a[0][4][4]=m;
	for(i=0;i<n;i++)
	{
		for(j=4-i;j<=4+i;j++)
		{
			for(k=4-i;k<=4+i;k++)
			{
				l=a[i][j][k];
				a[i+1][j-1][k-1]+=l;
				a[i+1][j-1][k]+=l;
				a[i+1][j-1][k+1]+=l;
				a[i+1][j][k-1]+=l;
				a[i+1][j][k]+=2*l;
				a[i+1][j][k+1]+=l;
				a[i+1][j+1][k-1]+=l;
				a[i+1][j+1][k]+=l;
				a[i+1][j+1][k+1]+=l;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			printf("%d ",a[n][i][j]);
		printf("%d\n",a[n][i][8]);
	}
	return 0;
}


