int main()
{
	int n, year, month1, month2, leap, days, month;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		days =0;
		cin >> year >> month1 >> month2;
		if((year % 4 == 0 && year % 100 != 0) || year % 400 ==0)
			leap = 1;
		else
			leap = 0;
		if(month1 > month2)
		{
			for(month = month2; month < month1; month++)
			{
				switch(month)
				{
					case 1	:
					case 3	:
					case 5	:
					case 7	:
					case 8	:
					case 10	:
					case 12 : days += 31; break;
					case 4	:
					case 6	:
					case 9	:
					case 11 : days += 30; break;
					case 2 : days += 28 + leap; break;
				}
			}
		}
		if(month1 < month2)
		{	
			for(month = month1; month < month2; month++)
			{
				switch(month)
				{
					case 1	:
					case 3	:
					case 5	:
					case 7	:
					case 8	:
					case 10	:
					case 12 : days += 31; break;
					case 4	:
					case 6	:
					case 9	:
					case 11 : days += 30; break;
					case 2 : days += 28 + leap; break;
				}
			}
		}
		if(days % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}