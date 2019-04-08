int main()
{
	char c;
	int a[120][120]={0};
	int n,m,i,j,k,num=0;
	cin>>n;
	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++)
		{
			cin>>c;
			if (c=='#') a[i][j]=-1;//???
			if (c=='@') a[i][j]=1;//?????
		}
	cin>>m;
	for (k=2; k<=m; k++)
		for (i=1; i<=n; i++)
			for (j=1; j<=n; j++)
			if (a[i][j]<k && a[i][j]>0)//?????????????
			{
				if (a[i-1][j]==0) a[i-1][j]=k;
				if (a[i+1][j]==0) a[i+1][j]=k;
				if (a[i][j-1]==0) a[i][j-1]=k;
				if (a[i][j+1]==0) a[i][j+1]=k;
			}
	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++)
			if (a[i][j]>0) num++;
	cout<<num<<endl;
return 0;
}