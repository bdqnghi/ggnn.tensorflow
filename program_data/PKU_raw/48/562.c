int main()
{
	int n,q,i,j,a[9][9],m,c[9][9],k,b[9][9];
	cin>>n>>m;
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			a[i][j]=0;
			c[i][j]=0;
		}
	}
	a[4][4]=n;
	for(k=1;k<=m;k++)
	{
		for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{	b[i][j]=0;
			if(a[i][j]!=0)
			{
				c[i][j]=1;
			
			}
		}
	}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(a[i][j]!=0&&c[i][j]==1)
			{
				b[i-1][j]=b[i-1][j]+a[i][j];
				b[i+1][j]=b[i+1][j]+a[i][j];
				b[i][j-1]=b[i][j-1]+a[i][j];
				b[i][j+1]=b[i][j+1]+a[i][j];
				b[i+1][j+1]=b[i+1][j+1]+a[i][j];
				b[i-1][j-1]=b[i-1][j-1]+a[i][j];
				b[i+1][j-1]=b[i+1][j-1]+a[i][j];
				b[i-1][j+1]=b[i-1][j+1]+a[i][j];
				b[i][j]=b[i][j]+2*a[i][j];
				a[i][j]=0;
				c[i][j]=0;
			}
		}
	}
		for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=7;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<a[i][8];
		cout<<endl;
	}
    cin>>q;
    return 0;
}
