int main ( )
{
	int i, j, num = 0, startYear, startMonth, startDay, endYear, endMonth, endDay,
		Year[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> startYear >> startMonth >> startDay >> endYear >> endMonth >> endDay;
	if (startYear == endYear)
	{
		if((startYear % 4 == 0 && startYear % 100 != 0)||(startYear % 400 == 0))
				Year[1] = 29;
		else Year[1] = 28;
		if(startMonth == endMonth)
			num = num + endDay - startDay;
		else
		{
			for (i = startMonth-1;i < endMonth;i++)
			{
				if(i == startMonth-1)
					num = num + Year[i] - startDay;
				else if(i == endMonth-1)
					num = num + endDay;
				else num = num + Year[i];
			}
		}
	}
	else
	{
		for(j = startYear;j <= endYear;j++)
		{
			if(j == startYear)
			{
				if((startYear % 4 == 0 && startYear % 100 != 0)||(startYear % 400 == 0))
					Year[1] = 29;
				else Year[1] = 28;
				for (i = startMonth-1;i < 12;i++)
				{
					if (i == startMonth-1)
						num = num + Year[i] - startDay;
					else num = num + Year[i];
				}
			}
			else if (j == endYear)
			{
				if((endYear % 4 == 0 && endYear % 100 != 0)||(endYear % 400 == 0))
					Year[1] = 29;
				else Year[1] = 28;
				for (i = 0;i < endMonth;i++)
				{
					if (i == endMonth - 1)
						num = num + endDay;
					else num = num + Year[i];
				}
			}
			else
			{
				if((j % 4 == 0 && j % 100 != 0)||(j % 400 == 0))
					Year[1] = 29;
				else Year[1] = 28;
				for (i = 0;i < 12;i++)
					num = num + Year[i];
			}
	    }
	}
	cout << num <<endl;
	return 0;
}