
int main()
{
	int y, m, d, day = 0;
	scanf("%d%d%d", &y, &m, &d);
	if (y%4 == 0 && y%100 != 0 && y % 400 == 0)
		switch (m)
	{
		case 12 : day = day + 30;
		case 11 : day = day + 31;
		case 10 : day = day + 30;
		case 9 : day = day + 31;
		case 8 : day = day + 31;
		case 7 : day = day + 30;
		case 6 : day = day + 31;
		case 5 : day = day + 30;
		case 4 : day = day + 31;
		case 3 : day = day + 29;
		case 2 : day = day + 31;
		case 1 : day = day + d;
	}
	else
				switch (m)
	{
		case 12 : day = day + 30;
		case 11 : day = day + 31;
		case 10 : day = day + 30;
		case 9 : day = day + 31;
		case 8 : day = day + 31;
		case 7 : day = day + 30;
		case 6 : day = day + 31;
		case 5 : day = day + 30;
		case 4 : day = day + 31;
		case 3 : day = day + 28;
		case 2 : day = day + 31;
		case 1 : day = day + d;
	}
	printf("%d", day);
	

}
