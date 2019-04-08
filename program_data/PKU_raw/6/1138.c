int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		t--;
		int m,n,i,j,sum=0;
		cin>>m>>n;
		int a[100][100];
		//cout<<"sum="<<sum;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
				//cout<<a[i][j]<<' ';
				if(i==0)
					sum=sum+a[i][j];
				if(i==m-1)
					sum=sum+a[i][j];
				//cout<<'*'<<sum<<'*'<<' ';
			}
		for(i=1;i<m-1;i++)
			{
			sum+=a[i][0];
			sum+=a[i][n-1];
			}
		cout<<sum<<endl;
	}
	return 0;
}
