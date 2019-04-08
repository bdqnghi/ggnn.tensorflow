int main()
{
	int board[500][500], n, i, j, r1, c1, r2, c2;
	int *p = *board;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> *(p + i * 500 + j);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (*(p + i * 500 + j) == 0)
			{
				r1 = i;
				c1 = j;
				i = 9999;
				break;
			}
	for (i = n - 1; i >= 0; i--)
		for (j = n - 1; j >= 0; j--)
			if (*(p + i * 500 + j) == 0)
			{
				r2 = i;
				c2 = j;
				i = -1;
				break;
			}
	cout << (r2 - r1 - 1) * (c2 - c1 - 1) << endl;
	return 0;
}