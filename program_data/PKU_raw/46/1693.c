int main()
{
	int a[100][100]= {0}, r, c, i, j, n = 0;
	cin >> r >> c ;
	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			cin >> a[i][j];
		}
	}
	j = 1;
	i = 0;
	while ((2 * n < c - 1) && (2 * n < r - 1))
	{
		for (i  = 1 + n; i <= c - n; i++)
		{
			cout << a[j][i] << endl;
		}
		i--;
	    for (j = j + 1; j <= r - n; j++)
		{
		    cout << a[j][i] << endl;
		}
		j--;
	    for (i = i - 1; i >= 1 + n; i--)
		{
		    cout << a[j][i] << endl;
		}
		i++;
	    for (j = j - 1; j > 1 + n; j--)
		{
		    cout << a[j][i] << endl;
		}
		j++;
	    n++;
	}
	if(2 * n == r - 1)
		for (i  = 1 + n; i <= c - n; i++)
		{
			cout << a[j][i] << endl;
		}
	else if(2 * n == c - 1)
		for (j = j; j <= r - n; j++)
		{
		    cout << a[j][i + 1] << endl;
		}
	return 0;
}
