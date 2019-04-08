
int main()
{
	int y[2], m[2], d[2], sum = 0, dec = 0, plu = 0;
	int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		Lmon[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> y[0] >> m[0] >> d[0];
	cin >> y[1] >> m[1] >> d[1];
	for (int i = y[0]; i < y[1]; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	for (int j = 1; j < m[0]; j++)
	{
		if ((y[0] % 4 == 0 && y[0] % 100 != 0) || y[0] % 400 == 0)
		{
			dec += Lmon[j];
		}
		else
		{
			dec += mon[j];
		}
	}
	dec += d[0];
	sum -= dec;
	for (int k = 0; k < m[1]; k++)
	{
		if ((y[1] % 4 == 0 && y[1] % 100 != 0) || y[1] % 400 == 0)
		{
			plu += Lmon[k];
		}
		else
		{
			plu += mon[k];
		}
	}
	plu += d[1];
	sum += plu;
	cout << sum << endl;

	return 0;
}