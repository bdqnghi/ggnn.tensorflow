int main()
{
	int x1, x2, y1, y2;
	int a[100][100], b[100][100], c[100][100];
	cin >> x1 >> y1;
	for(int i = 0; i <= x1 - 1; i ++)
		for(int j = 0; j <= y1 - 1; j ++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for(int k = 0; k <= x2 - 1; k ++)
		for(int q = 0; q <= y2 - 1; q ++)
			cin >> b[k][q];
	for(int w = 0; w <= x1 -1; w ++)
		for(int e = 0; e <= y2 - 1; e ++)
		{
			c[w][e] = 0;
			for(int r = 0; r <= y1 - 1; r ++)
			{
				c[w][e] = c[w][e] + a[w][r] * b[r][e];
			}
			if(e == 0)
				cout << c[w][e];
			else
				cout << " " << c[w][e];
			if(e == y2 - 1)
				cout << "\n";
		}
	return 0;
}