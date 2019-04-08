int main()
{
	int n, i, leap, j, month;
	int year, m1, m2, d=0;

	cin >> n;
	for(i = 1;i <= n;i++)
	{
                d = 0;
		cin >> year >> m1 >> m2;

		if((year % 400 == 0)||(year % 100 != 0 && year % 4 == 0)) leap = 1;
		else leap = 0;
		if(m1 > m2)
		{
			month = m2;
			m2 = m1;
			m1 = month;
		}
		for(j = m1;j < m2;j++)
		{
			switch(j)
			{
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 : d += 31;break;

        	case 4 :
			case 6 :
			case 9 :
			case 11 : d += 30;break;

        	case 2 : d = d + 28 + leap;break;
			}
		}
		if(d % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
