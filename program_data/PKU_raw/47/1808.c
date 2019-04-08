int main()
{
	int n;
	cin>>n;
	int c[100];
	for(int i=1;i<=n;i++)
		{
			int a;
			cin>>a;
			c[n-i]=a;
	}
	for(int t=1;t<=(n-1);t++)
	cout<<c[t-1]<<' ';
	cout<<c[n-1];
	
	return 0;
}