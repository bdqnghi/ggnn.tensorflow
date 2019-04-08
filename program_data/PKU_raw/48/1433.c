
void fanzhi(int day);
int n, a[10][10] = {0}, b[10][10] = {0};

int main()
{
	int m;
	cin >> m >> n;
	b[5][5] = m;
	fanzhi(1);

	for (int i = 1; i < 10; i++)
	{
		cout << a[i][1];
		for (int j = 2; j < 10; j++)
		{
			cout << ' ' << a[i][j];
		}
		cout << endl;
	}
	return 0;
}

void fanzhi(int day)
{
	if (day == n + 1)
	{
		return;
	}
	else
	{
		int i, j;
		memset(a, 0, sizeof(a));
		for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 10; j++)
			{
				if (b[i][j] != 0)
				{
					a[i][j] += 2 * b[i][j];
					if(i > 1 && j > 1)
						a[i - 1][j - 1] += b[i][j];
					if(i > 1)
						a[i - 1][j] += b[i][j];
					if(i > 1 && j < 9)
						a[i - 1][j + 1] += b[i][j];
					if(j < 9)
						a[i][j + 1] += b[i][j];
					if(j < 9 && i < 9)
						a[i + 1][j + 1] += b[i][j];
					if(i < 9)
						a[i + 1][j] += b[i][j];
					if(i < 9 && j > 1)
						a[i + 1][j - 1] += b[i][j];
					if(j > 1)
						a[i][j - 1] += b[i][j];
				}
			}
		}
		for (i = 1; i < 9; i++)
		{
			for (j = 1; j < 9; j++)
			{
				b[i][j] = a[i][j];
			}
		}
		fanzhi(day + 1);
	}
}