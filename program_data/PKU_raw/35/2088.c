

int a[10][10];

int h_max(int h, int n)	{
	int tmp_max = -1, tmp_idx = 0;
	int i;
	for(i = 0; i < n; ++i)	{
		if(tmp_max < a[h][i])	{
			tmp_max = a[h][i];
			tmp_idx = i;
		}
	}
	return tmp_idx;
};

int c_min(int c, int m)	{
	int tmp_min = 999999, tmp_idx = 0;
	int i;
	for(i = 0; i < m; ++i)	{
		if(tmp_min > a[i][c])	{
			tmp_min = a[i][c];
			tmp_idx = i;
		}
	}
	return tmp_idx;
}

int main()	{
	int m, n;
	scanf("%d,%d", &m, &n);
	int i, j;
	for(i = 0; i < m; ++i)	{
		for(j = 0; j < n; ++j)	{
			cin >> a[i][j];
		};
	}
	int flag = 0;
	for(i = 0; i < m; ++i)	{
		int h = h_max(i, n);
		int c = c_min(h, m);
		if(i == c)	{
			flag = 1;
			cout << c << "+" << h << endl;
		}
	}
	if(flag == 0)	{
		cout << "No" << endl;
	}
	return 0;
}
			