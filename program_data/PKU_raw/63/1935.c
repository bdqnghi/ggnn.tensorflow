int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	int a[x1][y1];
	for (int i = 0; i < x1; i++)
	for (int j = 0; j < y1; j++)
	cin >> a[i][j];
	cin >> x2 >> y2;
	int b[x2][y2];
	for (int i = 0; i < x2; i++)
	for (int j = 0; j < y2; j++)
	cin >> b[i][j];
	int c[x1][y2];
        for (int i = 0; i < x1; i++)
	for (int j = 0; j < y2; j++)
	c[i][j] = 0;
	for (int i = 0; i < x1; i++)
	for (int j = 0; j < y2; j++)
	{
		for (int k = 0; k < x2; k++)
		c[i][j] += a[i][k] * b[k][j];
		if (j == 0 && i != 0)
		cout << endl;
		if (j)
		cout << " ";
		cout << c[i][j];
	}
	return 0;
} 