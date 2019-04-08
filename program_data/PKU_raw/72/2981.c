int main()
{
	int a[21][21]={0};
	int b[500][2]={0};
	int m,n,i,j,k=0;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
			{b[k][0]=i;b[k][1]=j;k++;}
	for(i=0;i<k;i++)
	{cout<<b[i][0]-1<<" "<<b[i][1]-1<<'\n';}
	return 0;
}