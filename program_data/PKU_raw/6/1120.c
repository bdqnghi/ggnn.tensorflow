int main()
{
	int k,m,n,i,j,h,a[1000][1000]={0},result;
	cin>>k;
	for(h=0;h<k;h++)
	{
		result=0;
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(j=0;j<n;j++)
			result=result+a[0][j]+a[m-1][j];
		for(i=1;i<m-1;i++)
			result=result+a[i][0]+a[i][n-1];
		cout<<result<<endl;
	}
	return 0;
}