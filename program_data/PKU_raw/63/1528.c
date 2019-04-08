
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	int a[100][100], b[100][100], c[100][100] = {0};
	int i = 0, j = 0, l = 0;
	for (i = 0; i < x1; i++)
		for (j = 0; j < y1; j++)
			cin >> a[i][j];
		cin >> x2 >> y2;
		for (i = 0; i < x2; i++)
			for (j = 0; j < y2; j++)
				cin >> b[i][j];
			for (i = 0; i < x1; i++)
			{
				for (j = 0; j < y2; j++)
				{
					for (l = 0; l < x2; l++)
						c[i][j] += a[i][l] * b[l][j];
					if (j == 0)
						cout << c[i][j];
					else 
						cout << " " << c[i][j];
				}
				cout << endl;
			}

				return 0;
}
