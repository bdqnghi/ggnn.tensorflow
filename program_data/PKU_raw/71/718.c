int main()
{
	int year[200], month0[200], month1[200], day;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int num, i, j, t;
	cin >> num;
	for (i = 0; i < num; i++)
	{
		day = 0;
		cin >> year[i] >> month0[i] >> month1[i];
		if (month0[i] > month1[i])
		{
			t = month0[i];
			month0[i] = month1[i];
			month1[i] = t;
		}
		if ((year[i] % 4 == 0 && year[i] % 100 != 0) || year[i] % 400 == 0)
			month[1] = 29;
		else
			month[1] = 28;
		for (j = month0[i]; j <= month1[i] - 1; j++)
			day += month[j - 1];
		if (day % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


