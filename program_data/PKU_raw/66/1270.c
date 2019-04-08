
/* ??????????????1?????0 */
int isLeapYear(int y)
{
	/* ??????
	   1. ?????????,???????3200,?????172800??????172800?????86400?????
	   2. ?????400??????
	   3. ?????4??????100??????
	*/
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0 && y % 3200 != 0 || y % 172800 == 0)
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;

}

int main()
{
	int year, month, day;
	int sum_mod_day;
	int i,t;
	int month_day_sum[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	scanf("%d%d%d",&year,&month,&day);

	month_day_sum[2] = isLeapYear(year) ? 29 : 28;
	/* Compute month day sum */
	for (i = 1; i < 13; i++)
	{
		month_day_sum[i] += month_day_sum[i-1];
	}

	year--;
	/* ?????? */
	sum_mod_day = 0;
/*
	t = year / 172800;
	sum_mod_day += t * 3;
	sum_mod_day %= 7;
	year %= 172800;

	t = year / 3200;
	sum_mod_day += t * 6;
	sum_mod_day %= 7;
	year %= 3200;
*/
//	t = year / 400;
//	sum_mod_day += t * 0;
//	sum_mod_day %= 7;
	year %= 400;
	
	t = year / 100;
	sum_mod_day += t * 5;
	sum_mod_day %= 7;
	year %= 100;

	if (year > 0)
	{
		t = year / 4;
		sum_mod_day += t * 2 + (year - t) * 1;
		sum_mod_day %= 7;
	}

	month--;
	sum_mod_day += month_day_sum[month];

	sum_mod_day += day;
	sum_mod_day %= 7;

	switch (sum_mod_day)
	{
	case 0:
		printf("Sun.");
		break;
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	default:
		break;
	}

	return 0;
}

