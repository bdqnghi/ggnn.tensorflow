int main()
{
	int sum = 0, i, j, date[2][3], a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			cin >> date[i][j];
	for (i = date[0][0] + 1; i < date[1][0]; i++)
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			sum += 366;
		else
			sum += 365;
	if (date[0][0] % 4 == 0 && date[0][0] % 100 != 0 || date[0][0] % 400 == 0)
		a[1] = 29;
	for (i = date[0][1]; i <= 11; i++)
		sum += a[i];
	sum += a[date[0][1] - 1] - date[0][2] + 1;
	if (date[1][0] % 4 == 0 && date[1][0] % 100 != 0 || date[1][0] % 400 == 0)
		a[1] = 29;
	else
		a[1] = 28;
	for (i = 0; i < date[1][1] - 1; i++)
		sum += a[i];
	sum += date[1][2];
	if (date[0][0] == date[1][0])
		cout << sum - 366 - a[1] + 28;
	else
		cout << sum - 1;
	return 0;
}
