int i,j,k,l,tot=0;
int sum(int a[][101],int n)
{
	if(n==1)
	{
		return tot;
	}
	for(i=0;i<=n-1;i++)
	{
		l=a[i][0];
		for(j=0;j<=n-2;j++)
		{
			l=min(l,a[i][j+1]);
		}
		for(j=0;j<=n-1;j++)
		{
			a[i][j]-=l;
		}
	}
	for(j=0;j<=n-1;j++)
	{
		l=a[0][j];
		for(i=0;i<=n-2;i++)
		{
			l=min(l,a[i+1][j]);
		}
		for(i=0;i<=n-1;i++)
		{
			a[i][j]-=l;
		}
	}
	tot+=a[1][1];
	for(i=1;i<=n-2;i++)
	{
		for(j=1;j<=n-2;j++)
		{
			a[i][j]=a[i+1][j+1];
		}
	}
	for(i=1;i<=n-2;i++)
	{
		a[i][0]=a[i+1][0];
	}
	for(j=1;j<=n-2;j++)
	{
		a[0][j]=a[0][j+1];
	}
	n--;
	sum(a,n);
}
int main()
{
	int a[101][101];
	int n;
	cin >> n;
	for(k=1;k<=n;k++)
	{
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				cin >> a[i][j] ;
			}
		}
		cout << sum(a,n) << endl;
		tot = 0;
	}
	return 0;
}