int main()
{
	int m[20][20], x, y, f;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> m[i][j];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
		{
			f = 0;
			if (i > 0)
			{
				if (m[i][j] >= m[i - 1][j])
					f++;
			}
			else
				f++;
			if (j > 0)
			{
				if (m[i][j] >= m[i][j - 1])
					f++;
			}
			else
				f++;
			if (i < x - 1)
			{
				if (m[i][j] >= m[i + 1][j])
					f++;
			}
			else
				f++;
			if (j < y - 1)
			{
				if (m[i][j] >= m[i][j + 1])
					f++;
			}
			else
				f++;
			if (f == 4)
				cout << i << " " << j << endl;
		}


	return 0;
}