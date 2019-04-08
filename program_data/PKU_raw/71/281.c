
int normal_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap(int year) {
	if (year % 100 == 0)
		return year % 400 == 0;
	
	return year % 4 == 0;
}

int day_of_year(int year, int month, int day) {
	int *months = is_leap(year) ? leap_months : normal_months;
	
	int days = 0;
	int i;
	for ( i = 0; i < month - 1; i++)
		days += months[i];
	
	days += day;

	return days;
}

int main() {
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		int year, month1, month2;
		scanf("%d%d%d", &year, &month1, &month2);
		int days1 = day_of_year(year, month1, 1);
		int days2 = day_of_year(year, month2, 1);
		
		if ((days1 - days2) % 7 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}