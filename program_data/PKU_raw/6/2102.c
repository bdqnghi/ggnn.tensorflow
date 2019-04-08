/*????????????? 
  ??????1200012829
  ???2012-11-9 23:22:35*/
int main ()
{
	int k, x, a[100][100] = {{0,0}}, m, n, i, j, sum = 0;
	cin >> k;
	for ( x = 1; x <= k; x++ )
	{
		cin >> m >> n;
		for ( i = 0; i <= m - 1; i++ )
		{
			for ( j = 0; j <= n - 1; j++ )
			{
				cin >> a[i][j];
				if ( i == 0 || j == 0 || i ==  ( m - 1 ) || j == ( n - 1 ) )
				{
					sum = sum + a[i][j];
				}
			}
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}