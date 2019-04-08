int main()
{
	int n,m,i,j,A[25][25];
	cin>>n>>m;
	for(i=0;i<25;i++)
		for(j=0;j<25;j++)
			A[i][j]=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>A[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(A[i+1][j]-A[i][j]<=0&&A[i][j+1]-A[i][j]<=0&&A[i-1][j]-A[i][j]<=0&&A[i][j-1]-A[i][j]<=0)
				cout<<i-1<<' '<<j-1<<endl;
	return 0;
}


