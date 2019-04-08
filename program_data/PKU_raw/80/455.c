int main()
{
	int sum = 0; 
	int y1, y2, d1, d2, m1, m2;
	int i,j;
	int u1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},u2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	for (i = y1; i < y2; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			sum += 366;
		}
		else
			sum += 365;
		//cout << i << endl;
	}
	//cout << sum << endl;
	if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{
		for (j = 1; j < m1; j++)
		{
			sum -= u1[j];
		}
		sum -= d1;
	}
	else
	{
		for (j = 1; j < m1; j++)
		{
			sum -= u2[j];
		}
		sum -= d1;
	}//cout << sum << endl;
	if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	{
		for (j = 1; j < m2; j++)
		{
			sum += u1[j];
		}
		sum += d2;
	}
	else
	{
		for (j = 1; j < m2; j++)
		{
			sum += u2[j];
		}
		sum += d2;
	}

	cout << sum << endl;
return 0;
}