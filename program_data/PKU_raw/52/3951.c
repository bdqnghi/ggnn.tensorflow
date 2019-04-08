int main()
{
	int x[101],n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(j=1;j<=m;j++)
	{
		for(i=n;i>=1;i--)
		{
			x[i]=x[i-1];
		}
		x[0]=x[n];
	}

	for(i=0;i<n;i++)
	{
		if(i!=(n-1))
		{
			cout<<x[i]<<" ";
		}
		else
		{
			cout<<x[i]<<endl;
		}
	}
	return 0;
}




