int main()
{
	int a[9][9]={0},b[9][9]={0};
	int m,n;
	cin>>m>>n;
	int i,j,k,l;
	a[4][4]=m;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				if(a[j][k]!=0)
				{
					b[j][k-1]=b[j][k-1]+a[j][k];
					b[j][k+1]=b[j][k+1]+a[j][k];
					b[j-1][k]=b[j-1][k]+a[j][k];
					b[j+1][k]=b[j+1][k]+a[j][k];
					b[j-1][k-1]=b[j-1][k-1]+a[j][k];
					b[j+1][k+1]=b[j+1][k+1]+a[j][k];
					b[j+1][k-1]=b[j+1][k-1]+a[j][k];
					b[j-1][k+1]=b[j-1][k+1]+a[j][k];
				}
			}
		}
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				if(a[j][k]!=0)
					a[j][k]=a[j][k]+a[j][k];
			}
		}
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
				a[j][k]=a[j][k]+b[j][k];
		}
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
				b[j][k]=0;
		}
	}
	for(i=0;i<9;i++)
	{
		cout<<a[i][0];
		for(j=1;j<9;j++)
			cout<<' '<<a[i][j];
		cout<<endl;
	}
	return 0;
}