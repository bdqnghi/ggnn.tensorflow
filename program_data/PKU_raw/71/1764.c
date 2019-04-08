/*???2011-12-30
 *??????
 *????08.cpp
 *????? - ??(10.5) ???
 */


int main()
{
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int n = 0;
	int year = 0;
	int month1 = 0;
	int month2 = 0;
	int days = 0;
	cin >> n;
	for (int temp = 0; temp < n; temp++)
	{
		cin >> year >> month1 >> month2;
		days = 0;
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			month[2] = 29;
		else
			month[2] = 28;
		if (month1 < month2)
			for (int temp2 = month1; temp2 < month2; temp2++)
				days += month[temp2];
		else
			for (int temp2 = month2; temp2 < month1; temp2++)
				days += month[temp2];
		if (days % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
