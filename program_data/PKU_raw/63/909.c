int main()
{
	int a[100][100], b[100][100], c[100][100] = {0}, i, j, k;
	int arow, acol, brow, bcol;
	cin >> arow >> acol;
	for (i = 0; i < arow * acol; i++)
		cin >> a[i / acol][i % acol];
	cin >> brow >> bcol;
	for (i = 0; i < brow * bcol; i++)
		cin >> b[i / bcol][i % bcol];
	for (i = 0; i < arow; i++)
	{
		for (j = 0; j < bcol; j++)
		{
			for (k = 0; k < acol; k++)
				c[i][j] += a[i][k] * b[k][j];
			cout << c[i][j];
			if (j == bcol - 1)
				cout << endl;
			else	
				cout << " ";
		}
	}
	return 0;
}


