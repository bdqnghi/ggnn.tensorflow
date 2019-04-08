int main()
{
	int sum1, sum2, month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year1, year2, month1, month2, day1, day2;
	int i, count = 0;
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	for(i = 1; i < year1; i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			count++;
	}
	sum1 = 365 * (year1 - 1) + day1 + count;
	for(i = 1; i < month1; i++)
		sum1 += month[i];
	if((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
	{
		if(month1 > 2)
			sum1++;
	}
	count = 0;
	for(i = 1; i < year2; i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			count++;
	}
	sum2 = 365 * (year2 - 1) + day2 + count;
	for(i = 1; i < month2; i++)
		sum2 += month[i];
	if((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
	{
		if(month2 > 2)
			sum2++;
	}
	cout << sum2 - sum1 << endl;
	return 0;
}