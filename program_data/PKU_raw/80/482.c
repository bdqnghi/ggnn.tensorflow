int leapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 366;
	else return 365;
}
int main ()
{
	int startYear = 0, startMonth = 0, startDay = 0, endYear = 0, endMonth = 0, endDay = 0;//???????
	cin >> startYear >> startMonth >> startDay >> endYear >> endMonth >> endDay;
	int sum = 0, i = 0, j = 0;
	int leap[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		ping[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(i = startYear; i < endYear; i++)
		sum = sum + leapYear(i);
	for(i = 1; i < startMonth; i ++)
	{
		if(leapYear(startYear == 366))
			sum = sum - leap[i];
		else 
			sum = sum - ping[i];
	}
	sum = sum - startDay;
	for(i = 1; i < endMonth; i ++)
	{
		if(leapYear(endYear == 366))
			sum = sum + leap[i];
		else 
			sum = sum + ping[i];
	}
	sum = sum + endDay;
	cout << sum;

	return 0;
}