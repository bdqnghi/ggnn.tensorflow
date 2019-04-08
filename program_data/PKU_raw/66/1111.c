int main()
{
	int a[13] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5, 1},
		b[13] = {0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6, 2};
	int year, mon, day, i, sum = 0, t, n;
	
	cin >> year >> mon >> day;
	n = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; 
	sum = n * 2 + (year - 1 - n);

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		sum = sum + b[mon - 1] + day;
	else
		sum = sum + a[mon - 1] + day;

	t = sum % 7;
	switch(t)
	{
		case 0:cout << "Sun."; break;
		case 1:cout << "Mon."; break;
		case 2:cout << "Tue."; break;
		case 3:cout << "Wed."; break;
		case 4:cout << "Thu."; break;
		case 5:cout << "Fri."; break;
		case 6:cout << "Sat."; break;
	}
	return 0;
}