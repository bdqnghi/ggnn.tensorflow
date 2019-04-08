int main()
{
	int i, year, startyear, startmonth, startday, endyear, endmonth, endday, sum = 0;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> startyear>> startmonth>> startday>> endyear>> endmonth>> endday;
	if ((endyear - startyear) > 1)
	{
		for (year = startyear + 1; year < endyear; year++)
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
				sum += 366;
			else
				sum += 365;
		}
		for (i = startmonth - 1; i < 12; i++)
			sum += a[i];
		sum -= startday;
		for (i = 0; i < endmonth - 1; i++)
			sum += a[i];
		sum += endday;
	}
	else if ((endyear - startyear) == 1)
		{
		for (i = startmonth; i < 12; i++)
			sum += a[i];
		sum -= startday;
		for (i = 0; i < endmonth; i++)
			sum += a[i];
		sum += endday;
		}
	else
	{
		for (i = startmonth; i < endmonth - 1; i++)
			sum += a[i];
		if (startmonth != endmonth)
			sum = sum + a[startmonth - 1] - startday + endday;
		else
			sum = sum + endday - startday;
	}
	if ((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
		if (startmonth == 1 || (startmonth == 2 && startday != 29))
			sum++;
	if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))
		if (endmonth > 2)
			sum++;
	cout << sum;
	return 0;
}
