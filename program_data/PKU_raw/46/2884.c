
int main()
{
	int m, n, a[100][100], visit[100][100] = {0};
	int i, j;
	int count = 0;
	int type;							//1??????????2??????????3????4???

	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];

	i = 1, j = 1, type = 1;				//?(1,1)???,??????
	while (count < m * n)				//????????
	{
		cout << a[i][j] << endl;
		visit[i][j] = 1;
		count++;
		if (type == 1)					//???????????????(i,j)?
		{	
			if (j < n && visit[i][j + 1] == 0)			//???????
				j++;
			else										//??????
			{
				type = 2;
				i++;
			}
			continue;
		}
		if (type == 2)
		{	
			if (i < m && visit[i + 1][j] == 0)
				i++;
			else
			{
				type = 3;
				j--;
			}
			continue;
		}
		if (type == 3)
		{	
			if (j > 1 && visit[i][j - 1] == 0)
				j--;
			else
			{
				type = 4;
				i--;
			}
			continue;
		}
		if (type == 4)
		{	
			if (i > 1 && visit[i - 1][j] == 0)
				i--;
			else
			{
				type = 1;
				j++;
			}
			continue;
		}
	}
	return 0;
}