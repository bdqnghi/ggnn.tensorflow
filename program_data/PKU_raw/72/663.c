int main()
{
	int m=0,n=0,p=0,a[23][23],i=0,j=0,b[401],c[401];
	cin>>m>>n;
	for(j=0;j<=n+1;j++)
	{
		a[0][j]=0;
		a[m+1][j]=0;
	}
	for(i=0;i<=m+1;i++)
	{
		a[i][0]=0;
		a[i][n+1]=0;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
                {    
					b[p]=i-1;
					c[p]=j-1;
					p++;
                }
			}
			for(i=0;i<p;i++)
			{
				cout<<b[i]<<" "<<c[i]<<endl;
			}
			return 0;
}