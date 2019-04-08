int main()
	{
	int n,a[100]={0},i,j,m;
	cin>>n;
	for(i=1;i<=n;i++)
		{
		cin>>a[i];
		}
	for(j=1;j<=(n/2);j++)
		{
			m=a[j];
			a[j]=a[n-j+1];
			a[n-j+1]=m;
			
		}
	for(i=1;i<n;i++)
		{
		cout<<a[i]<<" ";
		}
	cout<<a[n];
	return 0;
	}



