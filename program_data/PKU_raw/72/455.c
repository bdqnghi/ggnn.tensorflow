
int main()
{
	int m,n,p=0,x[20000],y[20000],i,j,map[100][100];
	memset(map,0,sizeof(map));
	cin>>m>>n;
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
			cin>>map[i][j];
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
			if ((map[i][j]>=map[i-1][j])&&(map[i][j]>=map[i+1][j])&&(map[i][j]>=map[i][j-1])&&(map[i][j]>=map[i][j+1]))
			{p++;x[p]=i;y[p]=j;}
	for (i=1;i<=p;i++)
	{
		cout<<x[i]-1<<" "<<y[i]-1;
		if (i!=p) cout<<endl;
	}
	return 0;
}
