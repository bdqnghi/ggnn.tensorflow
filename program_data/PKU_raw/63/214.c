int main ()
{
	int a[101][101], b[101][101], c[101][101];
	int i, j, k, x1, y1, x2, y2, sum = 0;
	cin >> x1 >> y1;
	for ( i = 1; i <= x1; i++ )
		for ( j = 1; j <= y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for ( i = 1; i <= x2; i++ )
		for ( j = 1; j <= y2; j++ )
			cin >> b[i][j];
	for ( i = 1; i <= x1; i++ )
		for ( j = 1; j <= y2; j++ )
		{
			for ( k = 1; k <= x2; k++ )
				sum = sum + a[i][k] * b[k][j];
			c[i][j] = sum;
			sum = 0;
		}
	for ( i = 1; i <= x1; i++ )
		for ( j =1 ; j <= y2; j++ )
		{
			if ( j != y2 )
				cout << c[i][j] << " ";
			if ( j == y2 )
				cout << c[i][j] << endl;
		}
		return 0;
}






