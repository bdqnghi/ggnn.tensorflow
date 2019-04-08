int main()
{
	int nn, n, i, j, k, min[100], maze[100][100], sum;
	cin >> nn;
	for (k = 0; k < nn; k ++)
	{
		sum = 0;
		n = nn;
		for (i = 0; i < nn; i ++)
			for (j = 0; j < nn; j ++)
				cin >> maze[i][j];
		while (n > 1)
		{
		for (i = 0; i < n; i ++)
		{
			min[i] = maze[i][0];
			for (j = 1; j < n; j ++)
				min[i] = min[i] < maze[i][j] ? min[i] : maze[i][j];
		}
		for (i = 0; i < n; i ++)
			for (j = 0; j < n; j ++)
				maze[i][j] -=min[i];
		for (j = 0; j < n; j ++)
		{
			min[j] = maze[0][j];
			for (i = 1; i < n; i ++)
				min[j] = min[j] < maze[i][j] ? min[j] : maze[i][j];
		}
		for (j = 0; j < n; j ++)
			for (i = 0; i < n; i ++)
				maze[i][j] -=min[j];
		sum += maze[1][1];
		for (i = 1; i < n - 1; i ++)
			maze[i][0] = maze[i + 1][0];
		for (j = 1; j < n - 1; j ++)
			maze[0][j] = maze[0][j + 1];
		for (i = 1; i < n - 1; i ++)
			for (j = 1; j < n - 1; j ++)
				maze[i][j] = maze[i + 1][j + 1];
		n--;
		}
		cout << sum << endl;
	}
	return 0;
}

