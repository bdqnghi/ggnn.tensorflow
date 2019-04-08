int main()
{
	int k, m, n, i, q, j, s1 = 0, s2 = 0, s, a[100][100];
	cin >> k;
	for (q = 0; q < k; q++)
	{
	    cin >> m >> n;
		s1 = 0;
		s2 = 0;
		for (i = 0; i < m ; i++)
		    for (j = 0; j< n ; j++)
			{
			    cin >> a[i][j];
			    s1 = s1 + a[i][j];
			}
	    for (i = 1; i < m - 1; i++)
		    for (j = 1; j < n - 1; j++)
			{
			    s2 = s2 + a[i][j];
			}
	    s = s1 - s2;
	    cout << s <<endl;
	}
	return 0;
}