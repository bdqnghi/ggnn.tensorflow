
int main()
{
	int a[101][101];
	int i, j, k, r, p, t;
	int m, n, s;


	cin >> t;
	for (p = 1; p<=t; p++)
	{
		s=0;
		cin >> m >> n;
		                                                                                                                                                        
		for(j=1;j<=m;j++)
		{
			for(k=1;k<=n;k++)
			{
				cin >> a[j][k];
			}
		}
        if (m==1&&n==1)
		{
            cout << a[1][1];
            continue;
        }
		for(i=1; i <= n; i++)
		{
			s=s+a[1][i]+a[m][i];
		}
		for(r=1; r <= m; r++)
		{
			s=s+a[r][1]+a[r][n];
		}
		s=s-a[1][1]-a[1][n]-a[m][1]-a[m][n];
		cout << s << endl;
	}

	return 0;
}

