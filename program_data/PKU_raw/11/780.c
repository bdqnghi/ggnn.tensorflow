int	check(int year)
{
	if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
	{return 1;}
	else
	{return 0;}
}
int main()
{
	int	year, month, day, date = 0;
	cin >> year;
	cin >> month;
	cin >> day;
	int	m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	int	i;
	for (i = 1; i < month; i ++)
	{
		date = date + m[i];
		if(i == 2)
		{
			date = date + check(year);
		}
	}
	date = date + day;

	cout << date << endl;
return 0;
}
