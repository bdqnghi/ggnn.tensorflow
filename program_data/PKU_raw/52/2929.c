int main()
{
	int n,m,a[200],i;
	cin>>n>>m;
	for(i=100;i<n+100;i++)
	{
	  cin>>a[i];
	}
    for(i=n-m+100;i<n+100;i++)
	{
		a[i-n]=a[i];
	}
	for(i=100-m;i<n+100-m-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n+100-m-1]<<endl;
	return 0;
}


