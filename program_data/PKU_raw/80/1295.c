int judge(int);
int main()
{
	int mon1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int mon2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year1, year2, month1, month2, day1, day2, i, j, sum = 0;
	cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
	for(i = year1; i < year2; i++)
	{
		if(judge(i))
			sum += 366;
		else
			sum += 365;
	}
		if(judge(year2))
			for(j = 1; j < month2; j++)
				sum += mon2[j];
		else
			for(j = 1; j < month2; j++)
				sum += mon1[j];
		sum += day2;
		if(judge(year1))
		{
			for(j = 1; j < month1; j++)
				sum -= mon2[j];
			sum -= day1;
		}
		else
		{
			for(j = 1; j < month1; j++)
				sum -= mon1[j];
			sum -= day1;
		}
		cout << sum;
	return 0;
}
int judge(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}