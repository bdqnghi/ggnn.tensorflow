int main()
{
	int k,m,n,a,sum[100]={0};
	int x,y,z;
	cin>>k;

	for(x=0;x<k;x++)
	{
		cin>>m>>n;
		for(y=0;y<m;y++)
		{
			for(z=0;z<n;z++)
			{
				cin>>a;
				if(z==0 || y==0 || z==n-1 || y==m-1)sum[x]=sum[x]+a;
			}
		}
	}

	for(x=0;x<k;x++)cout<<sum[x]<<endl;

	return 0;
}