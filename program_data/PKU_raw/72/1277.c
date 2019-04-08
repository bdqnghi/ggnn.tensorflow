//********************************
//*???4.cpp   **
//*?????? 1200012768 **
//*???2013.1.4  **
//*???????  **
//********************************
int main()
{
	int m, n, i, j, h[22][22] = {0}, flag[20][20] = {0};
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> h[i][j];
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			if (h[i][j] >= h[i - 1][j])
				flag[i][j]++;
			if (h[i][j] >= h[i + 1][j])
				flag[i][j]++;
			if (h[i][j] >= h[i][j - 1])
				flag[i][j]++;
			if (h[i][j] >= h[i][j + 1])
				flag[i][j]++;
			if (flag[i][j] == 4)
				cout << i - 1 << " " << j - 1 << endl;
		}
	return 0;
}
