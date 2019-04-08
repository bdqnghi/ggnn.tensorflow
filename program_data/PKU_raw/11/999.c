int main ( )
{
	int year, month, day, num = 0, i, 
		a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year >> month >> day;
	if((year % 400 == 0)||((year % 100 != 0)&&(year % 4 == 0)))/*???????*/
		a[1] = 29;
	else a[1] = 28;
	for(i = 0;i < month-1;i++)              /*??month-1???????*/
	{
		num += a[i];
	}
	num += day;                             /*???month?????*/
	cout << num <<endl;
	return 0;
}