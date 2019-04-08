int main()
{
	int m,n,i,j,a[100][100],x[100],y[100],p=0,k;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=0;j<=n+1;j++)
	{
		a[0][j]=a[1][j];
	}
	for(j=0;j<=n+1;j++)
	{
		a[m+1][j]=a[m][j];
	}
	for(i=0;i<=m+1;i++)
	{
		a[i][0]=a[i][1];
	}
	for(i=0;i<=m+1;i++)
	{
		a[i][n+1]=a[i][n];
	}
	/*for(i=0;i<=m+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
			{
				x[p]=i;
				y[p]=j;
				p++;
			}
		}
	}
	for(j=0;j<=p-2;j++)
	{
		for(i=0;i<=p-2-j;i++)
		{
			if(x[i]>x[i+1]||x[i]==x[i+1]&&y[i]>y[i+1])
			{
				k=x[i];
				x[i]=x[i+1];
				x[i+1]=k;
				k=y[i];
				y[i]=y[i+1];
				y[i+1]=k;

			}
		}
	}
	for(i=0;i<=p-1;i++)
	{
		cout<<x[i]-1<<" "<<y[i]-1<<endl;
	}
	
	return 0;
}
			


