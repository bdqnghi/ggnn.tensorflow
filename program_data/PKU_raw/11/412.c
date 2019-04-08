
int main()
{
	int year, month, date, February, day;
	scanf("%d %d %d", &year, &month, &date);
	if ((year%4==0 && year%100!=0) || (year%400 == 0))
		February = 29;
	else
		February = 28;
	if (month==1)
		day =  date;
	if (month==2)
		day = 31  + date;
	if (month == 3)
		day = 31 + February  + date;
	if (month == 4)
		day = 31 + February + 31  + date;
	if (month == 5)
		day = 31 + February + 31 + 30  + date;
	if (month == 6)
		day = 31 + February + 31 + 30 + 31 + date;
	if (month == 7)
		day = 31 + February + 31 + 30 + 31 + 30  + date;
	if (month == 8)
		day = 31 + February + 31 + 30 + 31 + 30 + 31  + date;
	if (month == 9)
		day = 31 + February + 31 + 30 + 31 + 30 + 31 + 31 +date;
	if (month == 10)
		day = 31 + February + 31 + 30 + 31 + 30 + 31 + 31 + 30+date;
	if (month == 11)
        day = 31 + February + 31 + 30 + 31 + 30 + 31 + 31 + 30+31+date;	
	if (month == 12)
        day = 31 + February + 31 + 30 + 31 + 30 + 31 + 31 + 30+31+30+date;
	printf("%d\n", day);
	return 0;
}