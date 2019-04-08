//********************************
//*???????               **
//*??????                 **
//*???2012.11.5              **
//*******************************/


int main()
{
	int a[100][100], b[100][100], c[100][100] = {0};
	int x1, x2, y1, y2, i, j, k, l;
	cin >> x1 >> y1;
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
			cin >> a[i][j];
	}
	cin >> x2 >> y2;
	for (i = 0; i < x2; i++)
	{
		for (j = 0; j < y2; j++)
			cin >> b[i][j];
	}
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y2; j++)
		{
			for (k = 0; k < y1; k++)
				c[i][j] += a[i][k] * b [k][j];
			cout << c[i][j];
			if ( j != y2 - 1)
				cout << " ";
			else 
				cout << endl;
		}
	}
	return 0;
}