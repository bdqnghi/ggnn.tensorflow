int main()
{
	int a[100] = {0};
	int n,temp;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int j=0;j<n/2;j++)
	{
		temp = a[j];
		a[j] = a[n-1-j];
		a[n-1-j] = temp;
	}
	for (int i=0;i<n;i++)
	{
		if (i==n-1)
		{
			cout<<a[i]<<endl;
		}
		else
		{
			cout<<a[i]<<' ';
		}
	}
	cout<<endl;
	return 0;
}