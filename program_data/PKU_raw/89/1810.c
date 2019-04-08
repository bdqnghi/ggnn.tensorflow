int map[20000][20000];
int main()
{
	int n, i, j;
	int found = 0;
	cin >> n;
	cin >> i >> j;
	while ((i != 0)||(j != 0))
	{
		map[i][j] = 1;
		cin >> i >> j;
	}
	for (i = 0; i < n; i++)
	{
		int mark = 0;
		for (j = 0; j < n; j++)
		{
			if ((map[i][j] == 1)&&(i != j))
			{
				mark = 1;
				break;
			}
		}
		if (mark == 0)
		{
			int mark2 = 0;
			for (j = 0; j < n; j++)
			{
				if ((j != i)&&(map[j][i] == 1))
					mark2++;
			}
			if (mark2 == n-1)
			{
				found = 1;
				cout << i << endl;
				break;
			}
		}
	}
	if (found == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}