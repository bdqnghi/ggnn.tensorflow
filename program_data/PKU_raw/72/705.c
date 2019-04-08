/*
 * 4.cpp
 *
 *  Created on: 2011-12-27
 *      Author: Administrator
 */
int main()
{
	int a[25][25];
	int m, n, i, j;
	cin >> m >> n;
	for( i = 0; i <= m - 1; i++ )
	{
		for( j = 0; j <= n - 1; j++ )
		{
			cin >> a[i][j];
		}
	}
	for( i = 0; i <= m - 1; i++ )
	{
		for( j = 0; j <= n - 1; j++ )
		{
			if( ( i == 0 || a[i-1][j] <= a[i][j])&&( i == m - 1 || a[i+1][j]<= a[i][j])&&( j == 0 || a[i][j - 1]<= a[i][j])&&(j==n - 1 || a[i][j+1]<=a[i][j]))
				cout << i << " " << j << endl;
		}
	}
	return 0;
}
