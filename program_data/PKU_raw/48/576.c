int num[9][9] = {0};  //????????
int m;
int f(int a, int b, int day)
{
	if ((a == 4) && (b == 4) && (day == 0))
		return m;   //??????m?	
	else if ((day == 0) && (a >= 0) && (a <= 8) && (b >= 0) && (b <= 8))
		return 0;   //???????
	else if ((a < 0) || (a > 8) || (b < 0) || (b > 8))
		return 0;   //??????
	else 
		return f(a - 1, b, day - 1) + f(a + 1, b, day - 1) + f(a, b - 1, day - 1)
				+ f(a, b + 1, day - 1) + f(a - 1, b - 1, day - 1) + f(a + 1, b - 1, day - 1)
				+f(a - 1, b + 1, day - 1) + f(a + 1, b + 1, day - 1) + 2 * f(a, b, day - 1);
	//??????!!????????????????????,??????????,?????????????????????
}
int main()
{
	int day, i, j;
	cin >> m >> day;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			num[i][j] = f(i, j, day);
		}
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == 8)
			{
				cout << num[i][j] << endl;
			}
			else
			{
				cout << num[i][j] << ' ';//????
			}
		}
	}
	return 0;
}