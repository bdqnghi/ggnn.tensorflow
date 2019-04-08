int main()
{
	int n=0;
	cin>>n;
	int a[n];
	int b[n];
	int i=0;

	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}

	for (i=0;i<n;i++)
		{
			a[i]=b[i];
			if (i<n-1)cout<<a[i]<<" ";
			else cout<<a[i];

		}
	return 0;

}
