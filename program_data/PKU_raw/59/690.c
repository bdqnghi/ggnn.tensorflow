int main()
{
	int a[120][120]={0};
	char c;
	int i,j,n,m,d,sum;
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			cin>>c;
			if (c=='.') a[i][j]=-1;//??
			if (c=='@') a[i][j]=1;//??
		}
	cin>>m;
	for (d=1;d<=m;d++)
	{
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				if ((a[i][j]<d)&&(a[i][j]>0))//???????????????
				{
					if (a[i-1][j]==-1) a[i-1][j]=d;//????????
					if (a[i+1][j]==-1) a[i+1][j]=d;
					if (a[i][j-1]==-1) a[i][j-1]=d;
					if (a[i][j+1]==-1) a[i][j+1]=d;
				}
	}
	sum=0;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if (a[i][j]>0) sum++;//??????
	cout<<sum<<endl;
    return 0;
}