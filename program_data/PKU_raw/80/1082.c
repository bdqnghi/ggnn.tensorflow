int main()
{
	int startYear, startMonth, startDay, endYear, endMonth, endDay, month1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, month2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, count = 0, i, j;
	cin >> startYear >> startMonth >> startDay >> endYear >> endMonth >> endDay;
	if (startYear == endYear)
	{
		if (((startYear % 4 == 0) && startYear % 100 != 0) || (startYear % 400 == 0))
		{
			if (startMonth == endMonth)
			{
				count = endDay - startDay;
			}
			else
			{
				for (i = startMonth + 1; i <= endMonth; i++)
				{
					count += month2[i];
				}
				count += month2[startMonth] - startDay;
				count += endDay;
			}
		}
		else
		{
			if (startMonth == endMonth)
			{
				count = endDay - startDay;
			}
			else
			{
				for (i = startMonth + 1; i <= endMonth; i++)
				{
					count += month1[i];
				}
				count += month1[startMonth] - startDay;
				count += endDay;
			}
		}
	}
	else
	{
		for (j = startYear; j <= endYear; j++)
		{
			if (j == startYear)
			{
				if (((j % 4 == 0) && j % 100 != 0) || (j % 400 == 0))
				{
					for (i = startMonth + 1; i <= 12; i++)
						count += month2[i];
					count += month2[startMonth] - startDay;
				}
				else
				{
					for (i = startMonth + 1; i <= 12; i++)
						count += month1[i];
					count += month1[startMonth] - startDay;
				}
			}
			else if (j == endYear)
			{
				if (((j % 4 == 0) && j % 100 != 0) || (j % 400 == 0))
				{
					for (i = 1; i <= endMonth - 1; i++)
						count += month2[i];
					count += endDay;
				}
				else
				{
					for (i = 1; i <= endMonth - 1; i++)
						count += month1[i];
					count += endDay;
				}
			}
			else
			{
				if (((j % 4 == 0) && j % 100 != 0) || (j % 400 == 0))
				{
					count += 366;
				}
				else
				{
					count += 365;
				}
			}
		}
	}
	cout << count;
	return 0;
}