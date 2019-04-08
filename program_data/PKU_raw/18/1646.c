int sum=0;
int a[100][100]={0};
void temp(int n)
{
	if(n==1)return;
	for( int i=0;i<n;i++)
		{
			int miner=1000;
			for(int j=0;j<n;j++)
				if (miner>a[i][j])
					miner=a[i][j];
			for(int j=0;j<n;j++)
				a[i][j]=a[i][j]-miner;
		}
		for( int j=0;j<n;j++)
		{
			int miner=1000;
			for(int i=0;i<n;i++)
				if (miner>a[i][j])
					miner=a[i][j];
			for(int i=0;i<n;i++)
				a[i][j]=a[i][j]-miner;
		}
		sum=sum+a[1][1];
		for ( int i=0;i<n;i++)
		   for( int j=1;j<n-1;j++)
		      a[i][j]=a[i][j+1];
		for(int j=0;j<n-1;j++)
			for( int i=1;i<n-1;i++)
				a[i][j]=a[i+1][j];
		temp(n-1);

}
int main()
{
	int n;
	cin>>n;
	for ( int m=0;m<n;m++)
	{
	    sum=0;
		for( int i=0;i<n;i++)
			for( int j=0;j<n;j++)
				cin>>a[i][j];
		temp(n);
		cout<<sum<<endl;
    }
    
	return 0;

}