int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main()
{
	int m, n;
	cin >> m >> n;
	double mount[22][22];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> mount[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int num = 0;
			double sum = 0;
			int k;
			for (k = 0; k < 4; k++)
			{
				int tempi = i + dx[k];
				int tempj = j + dy[k];
				if (tempi >= 0 && tempi < m && tempj >= 0 && tempj < n)
				{
					if(mount[i][j] < mount[tempi][tempj])
						break;
				}
			}
			if (k == 4)
				cout << i << " " << j << endl;
		}
	return 0;
}

