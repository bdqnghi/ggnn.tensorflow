int main()
{
	int n, m, i, j, a[101][101], round, count;
	cin >> n >> m;
	for (i=1; i<=n; i++)
		for (j=1; j<=m; j++)
			cin >> a[i][j];
	i=1;
	j=1;
	round=0;
	count=0;										//??????
	while (count<n*m)								//????????
	{
		while (j<=m-round)
		{
			cout << a[i][j] << endl;
			count++;
			j++;
		}
		if (count>=n*m) break;
		j--;
		i++;										//????
		while (i<=n-round)
		{
			cout << a[i][j] << endl;
			count++;
			i++;
		}
		if (count>=n*m) break;
		i--;
		j--;										//????
		while (j>=round+1)
		{
			cout << a[i][j] << endl;
			count++;
			j--;
		}
		if (count>=n*m) break;
		j++;
		i--;										//????
		while (i>=round+2)
		{
			cout << a[i][j] << endl;
			count++;
			i--;
		}
		if (count>=n*m) break;
		i++;
		j++;										//????
		round++;									//???????
	}
	return 0;										//main???????0
}