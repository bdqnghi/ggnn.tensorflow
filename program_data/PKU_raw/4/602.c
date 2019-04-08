int main()
{
	int n,m,a[1500][1500],b[10000],i,j,sum,t=0;///????
	cin>>n>>m;
	for (i=1;i<=1499;i++) for (j=1;j<=1499 ;j++) a[i][j]=-198;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
		for(sum=2;sum<=(n+m);sum++)
		{
			for (i=1;i<sum;i++)	
			{
				if (a[i][sum-i]!=-198)
					cout<<a[i][sum-i]<<endl;
			}
		}
		return 0;
}