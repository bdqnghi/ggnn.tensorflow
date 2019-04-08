
int main()
{
	int k, day = 0, n, y, m, d,i, month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 
	cin >> y >> m >> d;

	if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		month[2] = 29;
	else
		month[2] = 28;
	for(i = 1; i <= 400; i++)
	{
		if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
			day += 366;
		else 
			day += 365;
	}
	day = day % 7;
	k = (y-1) / 400;
	day = day * k;
	y = (y-1) % 400;
	for(i = 1; i <= y; i++)
	{
		if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
			day += 366;
		else 
			day += 365;
	}

	for(i = 1; i < m; i++)
		day += month[i];
	day += d;

	n = day % 7;
	switch(n)
	{
		case 1: cout << "Mon.";break;
		case 2: cout << "Tue.";break;
		case 3: cout << "Wed.";break;
		case 4: cout << "Thu.";break;
		case 5: cout << "Fri.";break;
		case 6: cout << "Sat.";break;
		case 0: cout << "Sun.";break; 
	} 
	

	return 0;
}
		
