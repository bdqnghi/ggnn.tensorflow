int leapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}
int main()
{
	int i,startYear,endYear,startMonth,endMonth,startDay,endDay,count = 0;
	scanf("%d%d%d",&startYear,&startMonth,&startDay);
	scanf("%d%d%d",&endYear,&endMonth,&endDay);
	if(startYear < endYear)
	{
		for(i = startMonth + 1; i <= 12; i++)
		{
			switch (i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:count+=31;break;
				case 4:
				case 6:
				case 9:
				case 11:count+=30;break;
				case 2:
					if(leapYear(startYear))
						count+=29;
					else
						count+=28;
			}
		}
		for(i = 1; i < endMonth; i++)
		{
			switch (i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:count+=31;break;
				case 4:
				case 6:
				case 9:
				case 11:count+=30;break;
				case 2:
					if(leapYear(endYear))
						count+=29;
					else
						count+=28;
			}
		}
		switch (startMonth)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:count+=31;break;
			case 4:
			case 6:
			case 9:
			case 11:count+=30;break;
			case 2:
				if(leapYear(endYear))
					count+=29;
				else
					count+=28;
		}
		count += endDay - startDay;
	}else{
		for(i = startMonth + 1; i < endMonth; i++)
		{
			switch (i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:count+=31;break;
				case 4:
				case 6:
				case 9:
				case 11:count+=30;break;
				case 2:
					if(leapYear(startYear))
						count+=29;
					else
						count+=28;
			}
		}
		if(startMonth < endMonth)
		{
			switch (startMonth)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:count+=31;break;
				case 4:
				case 6:
				case 9:
				case 11:count+=30;break;
				case 2:
					if(leapYear(endYear))
						count+=29;
					else
						count+=28;
			}
		}
		count += endDay - startDay;
	}
	for(i = startYear + 1;i < endYear; i++)
	{
		count += 365 + leapYear(i);
	}
	printf("%d",count);
	return 0;
}