int main()
{
	int n;
	cin>>n;
	int a[100][100];
	while(n--)
	{
		int x,y,sum=0;
		cin>>x>>y;
		for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		{
			cin>>a[i][j];
		}
		for(int i=0;i<x;i++)
		{
			if(y != 1)
				sum += a[i][0] + a[i][y-1];
			else
				sum += a[i][0];
		}	
		for(int j=1;j<y-1;j++)
		{
			sum += a[0][j] + a[x-1][j];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
