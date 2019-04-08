void fanzhi(int a[][9], int b[][9], int n, int count);
int main()
{
	int m, n;
	int a[9][9] = {0}, b[9][9] = {0};
	cin >> m >> n;
	a[4][4] = m;
	b[4][4] = m;
	fanzhi(a, b, n, 0);
	return 0;
}
void fanzhi(int a[][9], int b[][9], int n, int count)
{
	int i, j;
	if(count == n)
	{
		for(i = 0; i < 9; i++)
			for(j = 0; j < 9; j++)
			{
				if(j == 8)
					cout << a[i][j] << endl;
				else
					cout << a[i][j] << " ";
			}
	}
	else
	{
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				if(b[i][j] > 0)
				{
					a[i - 1][j] += b[i][j];
					a[i - 1][j - 1] += b[i][j];
					a[i - 1][j + 1] += b[i][j];
					a[i][j - 1] += b[i][j];
					a[i][j + 1] += b[i][j];
					a[i + 1][j - 1] += b[i][j];
					a[i + 1][j] += b[i][j];
					a[i + 1][j + 1] += b[i][j];
					a[i][j] += b[i][j];
				}
			}
		}
		for(i = 0; i < 9; i++)
			for(j = 0; j < 9; j++)
				b[i][j] = a[i][j];
		count ++;
		fanzhi(a, b, n, count);
	}
}