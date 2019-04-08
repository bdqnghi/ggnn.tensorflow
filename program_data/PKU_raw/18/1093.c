int main()
{
	int i, j, k, n, m, a[101][101], mini[101], minj[101], ans[101];	//????
	cin >> n;														//??????????????
	for (k=1; k<=n; k++)
	{
		memset(a,0,sizeof(a));
		memset(ans,0,sizeof(ans));
		for (i=1; i<=n; i++)
			for (j=1; j<=n; j++)
				cin >> a[i][j];
		m=n;														//??????
		while (m>1)
		{
			memset(mini,21474836,sizeof(mini));
			for (i=1; i<=m; i++)
				for (j=1; j<=m; j++)
					if (a[i][j]<mini[i])
						mini[i]=a[i][j];
			for (i=1; i<=m; i++)
				for (j=1; j<=m; j++)
					a[i][j]=a[i][j]-mini[i];						//???????
			memset(minj,21474836,sizeof(minj));
			for (j=1; j<=m; j++)
				for (i=1; i<=m; i++)
					if (a[i][j]<minj[j])
						minj[j]=a[i][j];
			for (j=1; j<=m; j++)
				for (i=1; i<=m; i++)
					a[i][j]=a[i][j]-minj[j];						//???????
	
			ans[k]=ans[k]+a[2][2];									//???????
			for (i=2; i<=m; i++)
				a[i][1]=a[i+1][1];
			for (j=2; j<=m; j++)
				a[1][j]=a[1][j+1];
			for (i=2; i<=m; i++)
				for (j=2; j<=m; j++)
					a[i][j]=a[i+1][j+1];
			m--;													//???????
		}
		cout << ans[k] << endl;										//???????
	}
	return 0;														//main???????0
}