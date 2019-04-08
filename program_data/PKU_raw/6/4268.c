int main()
{
	int k;
	cin>>k;
	for(int x=1;x<=k;x++)
	{
		int m,n;
		int A[100][100];
		int sum=0,a;
		cin>>m>>n;
		for(int j=1;j<=n;j++)
		{
			cin>>a;
			sum+=a;
		}
		for(int i=2;i<=m-1;i++)
		{
			cin>>a;
			sum+=a;
			for(int j=2;j<=n-1;j++)
				cin>>a;
			cin>>a;
			sum+=a;
		}
		if(n!=1)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a;
			    sum+=a;
		    }
		}
		cout<<sum<<endl;
	}
	return 0;
}