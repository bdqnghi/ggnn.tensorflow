int main()
{
	int m,n;
	cin >> m >> n;
	int height[200][200];
	int flag[200][200];
	memset(flag, 0, sizeof(flag));
	memset(height, 0, sizeof(height));
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n ;j++)
		{
			cin >> height[i][j];
		}
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			if (height[i][j] >= height[i - 1][j] && height[i][j] >= height[i + 1][j] && height[i][j] >= height[i][j - 1] && height[i][j] >= height[i][j + 1])
				flag[i][j] = 1;
		}
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (flag[i][j])
				cout << i - 1 << " " << j - 1 << endl;
	return 0;
}


