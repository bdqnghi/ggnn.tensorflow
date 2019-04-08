/*
 * 2.Cap
 *
 *  Created on: 2011-11-22
 *      Author: Administrator
 */

int a[10][10] = {0}, b[10][10] = {0};
void born( int i, int j )
{
	int num = b[i][j];
	if ( i > 1 )
		a[i - 1][j] += num;
	if ( i > 1 && j > 1 )
		a[i - 1][j - 1] += num;
	if ( j > 1 )
		a[i][j - 1] += num;
	if ( i < 9 && j > 1 )
		a[i + 1][j - 1] += num;
	if ( i < 9 )
		a[i + 1][j] += num;
	if ( i < 9 && j < 9 )
		a[i + 1][j + 1] += num;
	if ( j < 9 )
		a[i][j + 1] += num;
	if ( i > 1 && j < 9 )
		a[i - 1][j + 1] += num;
	a[i][j] += num;
}

int main()
{
	int m, n, i, j, k;
	cin >> m >> n;
	a[5][5] = m;
	for ( k = 1; k <= n; k++ )
	{
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
			{
				b[i][j] = a[i][j];
			}

		}
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
			{
				born( i, j );
			}
		}
		memset( b, 0, sizeof(b));
	}
	for ( i = 1; i <= 9; i++ )
	{
		for ( j = 1; j <= 8; j++ )
		{
			cout << a[i][j] << " ";
		}
		cout << a[i][9];
		cout << endl;
	}
	return 0;
}

