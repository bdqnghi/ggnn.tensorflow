int month1[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int month2[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
int main()
{
	int y1, y2, m1, m2, d1, d2, sum = 0, i;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	for(i = y1; i < y2; i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			sum += 366;
		else
			sum += 365;
	}
    if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	    sum += month2[m2 - 1] - month2[m1 - 1];
	else
		sum += month1[m2 - 1] - month1[m1 - 1];
	sum += d2 - d1;
	cout << sum;
	return 0;
}