int main()
{
	int x;
	cin>>x;
	int sum=0;
	int m,n;
	
	int g,i,j,temp;
	for(g=0;g<x;g++)
	{
		cin>>m;
		cin>>n;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			sum+=temp;
		}

		for(i=0;i<m-2;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>temp;
				if(j==0 || j==n-1)
				{
					sum+=temp;
				}
			}
		}
		if(m!=1)
		{
			for(i=0;i<n;i++)
			{
				cin>>temp;
				sum+=temp;
			}
		}
		cout<<sum<<endl;
	}
	return 0;

}