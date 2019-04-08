int		pan(int);
int main()
{
	int		mou[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

	int		year1, mou1, date1;
	int		year2, mou2, date2;
	int		day1 = 0, day2 = 0;
	int		i;
	cin >> year1 >> mou1 >> date1;
	cin >> year2 >> mou2 >> date2;

	for (i = 1; i <= mou1 - 1; i ++)
	{
		day1 += mou[pan(year1)][i];
	}
	day1 += date1;

	for (i = year1; i < year2; i ++)
	{
		day2 = day2 + 365 + pan(i);
	}
	for (i = 1; i <= mou2 - 1; i ++)
	{
		day2 += mou[pan(year2)][i];
	}
	day2 += date2;

	int	cha = labs(day1 - day2);
	cout << cha << endl;





return 0;
}
int		pan(int year)
{
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}