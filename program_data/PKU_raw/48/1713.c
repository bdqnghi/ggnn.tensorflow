// ??????
// ??? 1100012820
// 20111123
//******************
int sqr[9][9] = {0};
void printsqr(int a[9][9])
{
	int i, j;
	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 7; j++)
			cout << a[i][j] << " ";
		cout << a[i][8] << endl;
	}
}
void addv()
{
	int adsqr[9][9] = {0};
	int i, j, m, n;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for(m = i - 1; m <= i + 1; m++)
			{
				for(n = j - 1; n <= j + 1; n++)
				{
					if ((m >= 0) && (m <= 8) && (n >= 0) && (n <= 8))
						adsqr[m][n] += sqr[i][j];
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			sqr[i][j] += adsqr[i][j];
		}
	}
	return;
}
void grow(int days)
{
	if (days)
	{
		addv();
		grow(days - 1);
	}
	return;
}
int main()
{
	int num, day;
	cin >> num >> day;
	sqr[4][4] += num;
	grow(day);
	printsqr(sqr);
	return 0;
}


