
int days( int y, int m, int d )
{
	int year[3001];
	
	for ( int i = 1; i <=3000; i++ )
	{
		if ( i % 4 == 0 && i % 100 != 0)
			year[i] = 366;
		else if (i % 400 == 0 )
			year[i] = 366;
		else year[i] = 365;
	}
	
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int loopmon[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

	int days = 0;
	for ( int i = 1; i < y; i++)
		days += year[i];
	for ( int i = 1; i < m; i++)
	{
		if ( y % 4 == 0 && y % 100 != 0)
			days += loopmon[i];
		else if (y % 400 == 0 )
			days += loopmon[i];
		else days += month[i];
	}
	days += d;
	
	return days;
}

int main()
{
	int y1 = 0, m1 = 0, d1 = 0;
	int y2 = 0, m2 = 0, d2 = 0;
	
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	
	cout << days( y2, m2, d2 ) - days( y1, m1, d1 );
	
	
	return 0;
}