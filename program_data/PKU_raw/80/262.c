int main()
{
	int startYear, startMonth, startDay;
	int endYear, endMonth, endDay;
	int i, days = 0;
	cin >> startYear >> startMonth >> startDay;
	cin >> endYear >> endMonth >> endDay;
	for (i = startYear; i < endYear; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			days += 366;
		else
			days += 365;
	}
	for (i = 1; i < endMonth; i++)
	{
		switch (i)
		{
		case 1:	;
		case 3:	;
		case 5:	;
		case 7:	;
		case 8:	;
		case 10:	;
		case 12:	days += 31;	break;
		case 2:
			{
				if ((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0))
				{
					days += 29;
					break;
				}
				else
				{
					days += 28;	
					break;
				}
			}
		default :	days += 30;	break;
		}
	}
	days += endDay;
	for (i = 1; i < startMonth; i++)
	{
		switch (i)
		{
		case 1:	;
		case 3:	;
		case 5:	;
		case 7:	;
		case 8:	;
		case 10:	;
		case 12:	days -= 31;	break;
		case 2:
			{
				if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0))
				{
					days -= 29;	
					break;
				}
				else
				{
					days -= 28;	
					break;
				}
			}
		default :	days -= 30;	break;
		}
	}
	days -= startDay;
	cout << days << endl;
	return 0;
}