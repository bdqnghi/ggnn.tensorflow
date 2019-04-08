int main()
{
	int i, d, n, a[5][9][9]={{0}}, j, k, p, q;
	cin >> n >> d;
	a[0][4][4]=n;
	p=4;
	q=4;
	for (i=1; i <= d; i++)
		{
			for (j=p; j <= q; j++)
				for (k=p; k <= q; k++)
					a[i][j][k] += a[i-1][j][k];
			for (j=p; j <= q; j++)
				for (k=p; k <= q; k++)
						{
							a[i][j][k] += a[i-1][j][k];
							a[i][j+1][k] += a[i-1][j][k];
							a[i][j][k+1] += a[i-1][j][k];
							a[i][j-1][k] += a[i-1][j][k];
							a[i][j][k-1] += a[i-1][j][k];
							a[i][j+1][k+1] += a[i-1][j][k];
							a[i][j+1][k-1] += a[i-1][j][k];
							a[i][j-1][k+1] += a[i-1][j][k];
							a[i][j-1][k-1] += a[i-1][j][k];							
						}
				p--;
				q++;
		}
	for (j=0; j<9; j++)
		{
			for (k=0; k<8; k++)
				cout << a[d][j][k] << ' ';
			cout << a[d][j][8] << endl;
		}
	return 0;
}

