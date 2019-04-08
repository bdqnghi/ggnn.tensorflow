
int n, m, sum;
int room[102][102];

int main()
{
	int i,j,k;
	char ch;
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
	{
		scanf("%c", &ch); // skip \n
		for (j = 1; j <= n; j ++)
		{
			scanf("%c", &ch);
			if (ch == '#')
				room[i][j] = -1;
			else if (ch == '.')
				room[i][j] = 0;
			else if (ch == '@')
				room[i][j] = 1;
		}
	}
	for (i = 0; i <= n+1; i ++)
	{
		room[i][0] = room[0][i] = room[i][n+1] = room[n+1][i] = -1;
	}
	scanf("%d", &m);

	for (k = 1; k < m; k ++)
	{
		for (i = 1; i <= n; i ++)
			for (j = 1; j <= n; j ++)
			{
				if (room[i][j] == k)
				{
					if (room[i+1][j] == 0) room[i+1][j] = k+1;
					if (room[i-1][j] == 0) room[i-1][j] = k+1;
					if (room[i][j+1] == 0) room[i][j+1] = k+1;
					if (room[i][j-1] == 0) room[i][j-1] = k+1;
				}
			}
	}
	sum = 0;
	for (i = 1; i <= n; i ++)
	{
		for (j = 1; j <= n; j ++)
		{
			if (room[i][j] > 0)
				sum ++;
		}
	}
	printf("%d\n", sum);

	return 0;
}
