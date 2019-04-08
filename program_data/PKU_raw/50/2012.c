int main()
{
	int w = 0;
	int month = 0;
	int day = 12;
	scanf("%d", &w);
	for (month = 0; month <= 11; month ++)
	{
		if ((day % 7 + w) % 7 == 5)
			printf("%d\n", month + 1);
		if (month == 3 || month == 5 || month == 8 || month == 10)
			day += 30;
		else
		{
			if (month == 1)
				day += 28;
			else
				day += 31;
		}
	}
	return 0;
}