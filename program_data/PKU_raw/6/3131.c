int main()
{
	int k,m,n;
	int a[100][100];
	cin>>k;
	while(k--)
	{
		cin>>m>>n;
		if(m==1&&n==1)
		{	int k;
		cin>>k;
		cout<<k;}
		else{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int sum=0;
		for(int j=0;j<n;j++)
			sum+=*(*(a)+j)+*(*(a+m-1)+j);
		for(int i=1;i<m-1;i++)
		   sum+=*(*(a+i))+*(*(a+i)+n-1);
		cout<<sum<<endl;
	}
	}
	return 0;
}