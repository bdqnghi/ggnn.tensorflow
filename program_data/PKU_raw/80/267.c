int main()
{
	int year1,month1,day1, year2,month2,day2;
	int sum = 0,flag =0,i;
	int year,month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	for (year = year1;year <= year2;year++)
	{
		flag = 0;
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			flag = 1;
		if (year1 == year2)
		{
			for (i = month1;i < month2;i++)
			{
				sum += month[i];
			}
			sum = sum + day2 - day1;
			if (flag && month1 <= 2 && month2 > 2)
				sum ++;
		}
		else
		{
			if (year == year1)
			{
				for (i = month1;i <= 12;i++)
				{
					sum += month[i];
				}
				sum = sum  - day1;
				if (flag && (month1 <= 2))
					sum ++;
			}
			else if (year < year2)
			{
				sum += 365;
				if (flag)
					sum++;
			}
			if (year == year2)
			{
				for (i = 1;i < month2;i++)
				{
					sum += month[i];
				}
				sum = sum + day2;
				if (flag && (month1 <= 2 || month2 > 2))
					sum ++;
			}
			month1 = 1;
		}
	}
	cout << sum;
	return 0;
}




