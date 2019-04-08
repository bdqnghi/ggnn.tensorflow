int main()
{
	int n,m;
	cin >> n >> m ;
	int a[10000],b[10000];
	for(int i=0;i<=n-1;i++)
	{
		cin >> a[i] ;
	}
	cin .get();
	for(int i=0;i<=m-1;i++)
	{
		cin >> b[i] ;
	}
	for(int i=0;i<=n-2;i++)
	{
		for(int j=n-1;j>=i+1;j--)
		{
			int l;
			l=max(a[j],a[j-1]);
			a[j-1]=min(a[j],a[j-1]);
			a[j]=l;
		}
	}
	for(int i=0;i<=m-2;i++)
	{
		for(int j=m-1;j>=i+1;j--)
		{
			int l;
			l=max(b[j],b[j-1]);
			b[j-1]=min(b[j],b[j-1]);
			b[j]=l;
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		cout << a[i] << " " ;
	}
	for(int i=0;i<=m-1;i++)
	{
		if(i!=m-1)
			cout << b[i]<< " ";
		else
			cout << b[i] << endl;
	}
	return 0;
}
