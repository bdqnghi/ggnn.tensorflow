int main()
{
	int n,m,t;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=n-m;j<n;j++)
	{
		t=a[j];
		for(int l=j;l>j+m-n;l-=1)
		{
			a[l]=a[l-1];
		}
		a[j-n+m]=t;
	}
	for(int k=0;k<n-1;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<a[n-1];
}
