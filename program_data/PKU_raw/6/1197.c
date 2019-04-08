int main()
{
	int a[101][101];
	int t,i,j,sum=0;
	int m,n,k;
	int (*p)[101]=NULL;
	cin>>k;
	for (t=0;t<k;t++)
	{
		sum=0;
		memset(a,0,sizeof(a));
		cin>>m>>n;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
				cin>>a[i][j];
		p=a;
		for (i=0;i<=n-2;i++) sum+=*(*(p+0)+i);
		p=a;
		for (i=0;i<=m-2;i++) sum+=*(*(p+i)+n-1);
		p=a;
		for (i=1;i<=n-1;i++) sum+=*(*(p+m-1)+i);
		p=a;
		for (i=1;i<=m-1;i++) sum+=*(*(p+i)+0);
		cout<<sum<<endl;
	}
	return 0;
}