

int main()
{
	int startYear, startMonth, startDay, endYear, endMonth, endDay;
	int total=0, i;
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> startYear >> startMonth >> startDay;
	cin >> endYear >> endMonth >> endDay;
	if(startYear == endYear)
	{
		total-=startDay;
		total+=endDay;
		if((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0) && (startMonth <= 2) && (endMonth > 2))
			day[1]++;
		for(i = startMonth; i<endMonth -1; i++)
			total+=day[i];
	}
	else
	{
		total = (endYear-startYear - 1)*365;
		for(int year = startYear + 1; year<endYear;year++)
		{
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				total++;
		}
		total-=startDay;
		total+=endDay;
		for(i = startMonth-1; i<12;i++)
			total+=day[i];
		if((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0) && (startMonth <= 2))
			total++;
		for(i = 0; i<endMonth-1;i++)
			total+=day[i];
		if((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0) && (endMonth > 2))
			total++;
	}
	cout << total <<endl;

	return  0;
}