
int days_of_month[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
							{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int is_leap_year(int year)
{
	if(year%100!=0 && year%4==0 || year%400==0)
		return 1;
	else
		return 0;
}

int main()
{
	int year, month, day;
	scanf("%d%d%d", &year, &month, &day);
	int index = is_leap_year(year);
	int days = 0;
	for(int i=0; i<month-1; i++)
		days += days_of_month[index][i];
	days += day;
	printf("%d", days);
}