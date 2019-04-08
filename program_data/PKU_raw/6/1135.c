int main()
{
	int num_data;
	cin>>num_data;
 	while(num_data--)
	{
		int a[100][100];
		int m,n;
		int sum=0;

		cin>>m>>n;
		for(int i=0;i!=m;i++)
			for(int j=0;j!=n;j++)
				cin>>a[i][j];
		
		if(m==1)
		{
			for(int k=0;k!=n;k++)
				sum+=a[0][k];
		}
		else if(n==1)
		{
			for(int k=0;k!=m;k++)
				sum+=a[k][0];
		}
		else
		{
			for(int k=0;k!=n-1;k++)
				sum+=a[0][k];
			for(int k=0;k!=m-1;k++)
				sum+=a[k][n-1];
			for(int k=n-1;k!=0;k--)
				sum+=a[m-1][k];
			for(int k=m-1;k!=0;k--)
				sum+=a[k][0];
		}
		
		cout<<sum<<endl;
	}
	return 0;
}