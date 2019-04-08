
int main()
{
	int n, m;
	char a1[101][101] = {'x'}, a2[101][101] = {'x'};
	int i, j, k, l, t;
	int number[101] = {0};
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> a1[i][j];
			a2[i][j] = a1[i][j];
		}
	cin >> m;
for (t = 2; t <= m; t++)
{
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (a1[i][j] == '@')
			{
				if (a1[i-1][j] == '.'){a2[i-1][j] = '@';}
				if (a1[i][j-1] == '.'){a2[i][j-1] = '@';}
				if (a1[i+1][j] == '.'){a2[i+1][j] = '@';}
				if (a1[i][j+1] == '.'){a2[i][j+1] = '@';}
			}
		}

	for (k = 1; k <= n; k++)
		for (l = 1; l <= n; l++)
		{
			a1[k][l] = a2[k][l];
			if (a2[k][l] == '@')
			{
				number[t]++;
			}
		}
}
cout << number[m] << endl;
return 0;
}