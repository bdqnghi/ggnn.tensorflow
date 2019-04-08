int main ()
{
	int a[100][100], b[100][100], c[100][100];
	int x1, y1, x2, y2, i, j, k, l, m, n, h;
	cin >> x1 >> y1;
	for(i = 0; i < x1; i ++)
	{
		for(j = 0; j < y1; j ++)
			cin >> a[i][j];
	}
	cin >> x2 >> y2;
	for(k = 0; k < x2; k ++)
		for(l = 0; l < y2; l ++)
			cin >> b[k][l];
	for(m = 0; m < x1; m ++)
	{
		for(n = 0; n < y2; n ++)
		{
			c[m][n] = 0;
			for(h = 0; h < y1; h ++)
			{
				c[m][n] += a[m][h] * b[h][n];
			}
		}
	}
	for(i = 0; i < x1; i ++)
	{
		cout << c[i][0];
		for(j  = 1; j < y2; j ++)
			cout << " " << c[i][j];
		cout << endl;
	}
	return 0;
}

		

				

