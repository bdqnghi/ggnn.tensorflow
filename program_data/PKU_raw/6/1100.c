int main()
{
	int k,i,a[101][101];
	cin>>k;
	for(i=1;i<=k;i++)
	{
		int m,n,j1,j2,sum=0;
		cin>>m>>n;
		for(j1=1;j1<=m;j1++)
		{
			for(j2=1;j2<=n;j2++)
			{
				cin>>*(*(a+j1)+j2);//??
			}
		}
		for(j2=1;j2<=n;j2++)
			sum=sum+*(*(a+1)+j2)+*(*(a+m)+j2);//??????
		for(j1=2;j1<=m-1;j1++)
			sum=sum+*(*(a+j1)+1)+*(*(a+j1)+n);
		cout<<sum<<endl;
	}
	return 0;
}
	