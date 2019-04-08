
int main()
{
	int n;
	cin >> n;
	int year, month1, month2;
	for (int i= 1; i <= n; i++)
	{
		cin >> year >> month1 >> month2;
		int difference = month1 - month2;
		if (difference > 0)
		{
			month1 -= difference;
			month2 += difference;
		}
		int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
		if (((!(year % 4)) && (year % 100)) || !(year % 400))
			m[2] = 29;
		int d = 0;
		for (int j = month1; j < month2; j++)
			d += m[j];
		if (d % 7)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}