int main()
{
	int k;
	cin>>k;
	while(k--)
	{

		int array[100][100];
		int m,n;
		cin>>m>>n;
		for(int i=0;i!=m;i++)
			for(int j=0;j!=n;j++)
				cin>>array[i][j];
		int sum=0;
		if(m==1&&n==1)
			sum=array[0][0];
		else
		{
			for(int k=0;k!=n-1;k++)
				sum+=array[0][k];
			for(int k=0;k!=m-1;k++)
				sum+=array[k][n-1];
			for(int k=n-1;k!=0;k--)
				sum+=array[m-1][k];
			for(int k=m-1;k!=0;k--)
				sum+=array[k][0];
		}
		cout<<sum<<endl;


	}
	return 0;
}