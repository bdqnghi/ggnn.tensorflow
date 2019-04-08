

int a[200][200], b[200][200], c[200][200] = {0};

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	for (int i = 0; i < x1; i++)
		for (int j = 0; j < y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for (int i = 0; i < x2; i++)
		for (int j = 0; j < y2; j++)
			cin >> b[i][j];
	for (int i = 0; i < x1; i++)
		for (int j = 0; j < y2; j++)
		{
			for (int k = 0; k < y1; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j] << (j == y2-1 ? '\n' : ' ');
		}
	return 0;
}