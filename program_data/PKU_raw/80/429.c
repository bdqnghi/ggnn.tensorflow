int tian(int, int, int);
int g_a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int g_b[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
	int y1, y2, m1, m2, d1, d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	
	int sum1 = 0, sum2 = 0;
	sum1 = tian(y1, m1, d1);
	sum2 = tian(y2, m2, d2);
	cout<<sum2 - sum1<<endl;
	return 0;
}
int tian(int y, int m, int d)
{
	int i, sum = 0;
	for (i = 1; i < y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			sum +=366;
		else
			sum += 365;
	}
	for (i = 1; i < m; i++)
	{
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			sum += g_b[i];
		else
			sum += g_a[i];
	}
	sum += d;
	return sum;
}



