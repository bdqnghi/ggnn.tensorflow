int c[9000][9000];
int main()
{
	int n, i, j, a[9000], b[9000], d[9000], sum;
	cin >> n;
	i = 0;
	memset(c, 0, sizeof(c));
	memset(d, 0, sizeof(d));
	while(1)
	{
		cin >> a[i] >> b[i];
		if (a[i]==0&&b[i]==0)
			break;
		if (a[i]==b[i])
			continue;
		c[a[i]][b[i]]=1;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		if (d[i]==1)
			continue;
		for(j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (c[i][j]==1)
			{
				d[i]=1;
				break;
			}
			if (c[i][j]==0)
			{
				d[j]=1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (d[i]==1)
			continue;
		sum = 0;
		for (j = 0; j < n; j++)
			sum+=c[j][i];
		if (sum == n-1)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "NOT FOUND" << endl;
	return 0;
}
