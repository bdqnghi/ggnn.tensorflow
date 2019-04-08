//********************************
//*???????   **
//*????? 1300012707 **
//*???2013.11.06  **
//********************************
int main()
{
	int a[101][101], b[101][101], x1, y1, x2, y2, i, j, c;
	cin >> x1 >> y1;
	for ( i = 1; i <= x1; i = i + 1)
	{
		for ( j = 1; j <= y1; j = j + 1)
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for ( i = 1; i <= x2; i = i + 1)
	{
		for ( j = 1; j <= y2; j = j + 1)
		{
			cin >> b[i][j];
		}
	}
	for ( i = 1; i <= x1; i = i + 1)
	{
		for ( j = 1; j < y2; j = j + 1)
		{
			c = 0;
			for ( int k = 1; k <= y1; k = k + 1)
			{
				c = c + a[i][k] * b[k][j];
			}
			cout << c << " ";
		}
		c = 0;
		for ( int k = 1; k <= y1; k = k + 1)
		{
			c = c + a[i][k] * b[k][y2];
		}
		cout << c << endl;
	}
	return 0;
}