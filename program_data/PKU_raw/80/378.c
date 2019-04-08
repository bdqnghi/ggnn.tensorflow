
int Year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 366;
	return 365;
}
int main()
{
	int sy, sm, sd, ey, em, ed;
	int sum = 0, i, m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	for (i = sy; i <= ey; i++)
			sum += Year(i);
	for (i = 1; i < sm; i++)
		if (Year(sy) == 366 && i == 2)
			sum -= 29;
		else
			sum -= m[i];
	sum -= sd;
	for (i = 12; i > em; i--)
		if (Year(ey) == 366 && i == 2)
			sum -= 29;
		else
			sum -= m[i];
	if (Year(ey) == 366 && em == 2)
			sum -= 29 - ed;
	else
		sum -= m[em] - ed;
	cout << sum;
	return 0;
}
