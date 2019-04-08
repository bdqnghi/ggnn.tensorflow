int main()
{
	int year = 0, month = 0, day = 0, day2 = 0, day3 = 0;
	cin>> year >> month >> day;
	int i = 0, sum = 0, day1 = 0, sum2 = 0;
	sum = (year - 1) / 4 * 5 + (year -1) % 4 - year/100 +year / 400;
	day1 = sum % 7 + 1;
	if(day1 == 0)
		day1 = 7;
	int yue[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		yue[2] = 29;
	if(month == 1)
		sum2 = 0;
	else
	{
		for(i = 1; i <= month-1 ; i++)
		{
			sum2 = sum2 + yue[i];
		}
	}
	sum2 = sum2 + day - 1;
	day2 = sum2 % 7;
	day3 = (day2 + day1) % 7;
	if(day3 == 0)
		day3 = 7;
	if(day3 == 1)
		cout << "Mon." <<endl;
	if(day3 == 2)
		cout << "Tue." <<endl;
	if(day3 == 3)
		cout << "Wed." <<endl;
	if(day3 == 4)
		cout << "Thu." <<endl;
	if(day3 == 5)
		cout << "Fri." <<endl;
	if(day3 == 6)
		cout << "Sat." <<endl;
	if(day3 == 7)
		cout << "Sun." <<endl;
	return 0;
}