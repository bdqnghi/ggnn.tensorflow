
int a[m][m], b[m][m], c[m][m];

int main ( )
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	for ( int i = 1; i <= x1; i ++ )
		for ( int j = 1; j <= y1; j ++ )
			cin >> a[i][j];
	cin >> x2 >> y2;
	for ( int i = 1; i <= x2; i ++ )
		for ( int j = 1; j <= y2; j ++ )
			cin >> b[i][j];

	for ( int i = 1; i <= x1; i ++ )
	{
		for ( int j = 1; j <= y2; j ++ )
		{
			int t = 0;
			for ( int k = 1; k <= y1; k ++ )
				t += a[i][k] * b[k][j];
			c[i][j] = t;
		}
	}

	for ( int i = 1; i <= x1; i ++ )
	{
		for ( int j = 1; j <= y2; j ++ )
		{
			if ( j != 1 )
				cout << ' ';
			cout << c[i][j];
		}
		cout << endl;
	}
	return 0;
}
