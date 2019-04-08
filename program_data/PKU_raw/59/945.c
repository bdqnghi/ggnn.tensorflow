//********************************
//*???4.cpp   **
//*?????? 1200012768 **
//*???2012.12.  **
//*???????  **
//********************************
int main()
{
	char ch[101][101];
	int num[101][101];
	int n, m, i, j, d, cc = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cin >> ch[i][j];
			if (ch[i][j] == '.')
				num[i][j] = -1;
			else if (ch[i][j] == '#')
				num[i][j] = 0;
			else
				num[i][j] = 1;
		}
	cin >> m;
	for (d = 2; d <= m; d++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (num[i][j] > 0 && num[i][j] < d)
				{
					if (i > 0 && num[i - 1][j] == -1)
						num[i - 1][j] = d;
					if (j > 0 && num[i][j - 1] == -1)
						num[i][j - 1] = d;
					if (i < n - 1 && num[i + 1][j] == -1)
						num[i + 1][j] = d;
					if (j < n - 1 && num[i][j + 1] == -1)
						num[i][j + 1] = d;
				}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (num[i][j] > 0)
				cc++;
	cout << cc;	
	return 0;
}
