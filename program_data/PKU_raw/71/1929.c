
int main()
{
	int n, year, mon1, mon2, sum, c, d;
	int Lyear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int Oyear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		cin >> year >> mon1 >> mon2;
		c = (mon1 > mon2 ? mon2 : mon1);
		d = (mon1 > mon2 ? mon1 : mon2);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			for (int j = c; j < d; j++)
			{
				sum = sum + Lyear[j - 1];
			}
		}
		else
		{
			for (int k = c; k < d; k++)
			{
				sum = sum + Oyear[k - 1];
			}
		}
		
		if (sum % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;

}