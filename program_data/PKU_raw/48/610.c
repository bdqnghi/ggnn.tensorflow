int m, n, i, j;
int xijun[11][11] = {0};
int kuosan(int i, int j, int n);
int main()
{
    cin >> m >> n;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
	       xijun[i][j] = kuosan(i, j, n);
		   if(j == 1)
		   {
		       cout << xijun[i][j];
		   }
	       if(j >= 2 && j <= 9)
		   {
			   cout << ' ' << xijun[i][j];
		   }
		}
		if(j == 10)
		{
			cout << endl;
		}
	}
	return 0;
}
int kuosan(int i, int j, int n)
{
	if(i == 5 && j == 5 && n == 0)
	{
		return m;
	}
	if(i == 5 && j == 5 && n < 0)
	{
		return 0;
	}
	if(!(i == 5 && j == 5) && n <= 0)
	{
		return 0;
	}
	else
	{
		return (kuosan(i, j, n - 1) * 2 + kuosan(i - 1, j - 1, n - 1) + kuosan(i - 1, j, n - 1) + kuosan(i, j - 1, n - 1)
			+ kuosan(i + 1, j, n - 1) + kuosan(i + 1, j + 1, n - 1) + kuosan(i, j + 1, n - 1) + kuosan(i + 1, j - 1, n - 1) 
			+ kuosan(i - 1, j + 1, n - 1));
	}
}