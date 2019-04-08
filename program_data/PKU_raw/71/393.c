void judge(int, int, int);
int main()
{
	int n, year, m1, m2;
	cin >> n;
	for(; n > 0; n--)
	{
		cin >> year >> m1 >> m2;
		judge(year, m1, m2);
	}
	return 0;
}

void judge(int year, int m1, int m2)
{
	int i, s = 0, sum[11] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2};
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		sum[1] = 1;
	if (m2 < m1)
	{
		i = m2;
		m2 = m1;
		m1 = i;
	}
	for (i = m1 - 1; i < m2 - 1; i++)
		s += sum[i];
	if (s % 7 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}



	