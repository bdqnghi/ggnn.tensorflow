//???
int fun(int n)
{
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0, i = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int year = 0, mon1 = 0, mon2 = 0, sum = 0, j = 0, temp = 0;
		cin >> year >> mon1 >> mon2;
		int mon[13] = {0, 31, 28 + fun(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if (mon2 < mon1)
		{
			temp = mon1;
			mon1 = mon2;
			mon2 = temp;
		}
		for (j = mon1; j < mon2; j++)
		{
			sum += mon[j];
		}
		if (sum % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


