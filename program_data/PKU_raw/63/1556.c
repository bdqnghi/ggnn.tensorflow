/*???????
  ??????1200012829
  ???2012-11-10 0:04:13*/
int main ()
{
	int a[100][100], b[100][100], x1, x2, y1, y2, i, j, k, l, c[100][100] = {{0,0}}, m;
	cin >> x1 >> y1;
	for ( i = 0; i <= x1 - 1; i++ )
	{
		for ( j = 0; j <= y1 - 1; j++ )
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for ( k = 0; k <= x2 - 1; k++ )
	{
		for ( l = 0; l <= y2 - 1; l++ )
		{
			cin >> b[k][l];
		}
	}
	for ( i = 0; i <= x1 - 1; i++ )
	{
		for ( j = 0; j <= y2 - 1; j++ )
		{
			for ( m = 0; m <= y1 - 1; m++ )
			{
				c[i][j] = c[i][j] + a[i][m] * b[m][j];
			}
			if ( j == y2 - 1 && i != x1 - 1 )
			{
				cout << c[i][j] << endl;
			}
			else if ( j != y2 -1 )
			{
				cout << c[i][j] << ' ' ;
			}
			else
			{
				cout << c[i][j];
			}
		}
	}
	return 0;
}