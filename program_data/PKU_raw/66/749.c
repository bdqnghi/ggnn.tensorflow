
int main()
{
	
	char *weekday[7]={"Mon.", "Tue.", "Wed.", "Thu.", "Fri." ,"Sat." ,"Sun."};
	int days_of_month[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year, month ,day;
	scanf("%d %d %d", &year, &month, &day);

	int leap_year_flag;
	if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		leap_year_flag = 1;
	else 
		leap_year_flag = 0;

	int days_of_past_years = ((year - 1) % 7) * (365 % 7) % 7 + (year - 1) / 4 % 7 - (year - 1) / 100 % 7 + (year - 1) / 400 % 7 - (year - 1) / 3200 % 7 + (year - 1) / 86400 % 7; 
	int days_in_current_year = 0;
	for(int i = 0; i < month - 1; i++)
		days_in_current_year += days_of_month[leap_year_flag][i];
	days_in_current_year += day;	
	int total_days = days_of_past_years + days_in_current_year;
	printf("%s", weekday[(total_days - 1) % 7]   );


	return 0;
}