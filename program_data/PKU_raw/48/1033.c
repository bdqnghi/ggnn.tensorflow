
void reproduce(int n, int (*a)[9])
{
	if(n == 0)
		return;
	int temp[9][9] = {0};
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
			if(a[i][j])
			{
				temp[i][j] += 2 * a[i][j];
				if(i > 0)
				{
					temp[i - 1][j] += a[i][j];
					if(j > 0)
					{
						temp[i - 1][j - 1] += a[i][j];
						temp[i][j - 1] += a[i][j];
						if(i < 8)
						{
							temp[i + 1][j - 1] += a[i][j];
							temp[i + 1][j] += a[i][j];
						}
					}
					if(j < 8)
					{
						temp[i - 1][j + 1] += a[i][j];
						temp[i][j + 1] += a[i][j];
						if(i < 8)
							temp[i + 1][j + 1] += a[i][j];
					}
				}
			}
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
			a[i][j] = temp[i][j];
	return reproduce(n - 1, a);
}

int main()
{
	int m, n;
	int a[9][9] = {0};
	cin >> m >> n;
	a[4][4] = m;
	reproduce(n, a);
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
		{
			cout << a[i][j];
			if(j == 8)
				cout << endl;
			else
				cout << " ";
		}
	return 0;
}