
int main ()
{
	int n, i, year, m1, m2, leap, days;
	cin >> n;
	for (i = 1; i <= n; i++ )
	{
		cin >> year >> m1 >> m2;
		days = 0;
		leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
		if (m1 > m2)
		{
			int c = m1;
			m1 = m2;
			m2 = c;
		}
		for ( ; m1 < m2; m1++ )
		{
			switch(m1)
			{
				case(2):
					days += 28 + leap;
					break;
				case(4):
				case(6):
				case(9):
				case(11):
					days += 30;
					break;
				case(1):
				case(3):
				case(5):
				case(7):
				case(8):
				case(10):
				case(12):
					days += 31;
					break;
			}
		}
		if (days % 7 == 0)
		{
			cout << "YES" << endl;
		}
		else 
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}