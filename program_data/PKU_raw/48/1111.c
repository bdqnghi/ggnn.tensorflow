int m, n;	
int i, j;
int a[10][10] = {0}, b[10][10] = {0};

void zuo(int x)
{
	if(x == n)
	{
		for(i = 1; i <= 9; i++)
		{
			for(j = 1; j < 9; j++)
				cout << a[i][j] << " ";
			cout << a[i][9] << endl;
		}
	}
	else
	{
		for(i = 1; i <= 9; i++)
		{
			for(j = 1; j <= 9; j++)
				b[i][j] = a[i + 1][j + 1] + a[i][j] + a[i + 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j]
						+ a[i - 1][j] + a[i][j + 1] + a[i][j - 1]+ a[i - 1][j - 1];
		}
		
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				a[i][j] += b[i][j];
				b[i][j] = 0;
			}
		}
		zuo(x + 1);
	}
}
int main ()
{
	cin >> m >> n;
	a[5][5] = m;
	zuo(0);
	return 0;
}

