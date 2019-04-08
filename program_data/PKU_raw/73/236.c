int main()
{
	int a[5][5], sign[5][5] = {0}, max, flag = 0;
	for (int i = 0; i < 5; i++)
	{
		max = 0;
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
            if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		for (int k = 0; k < 5; k++)
		{
			if (a[i][k] == max)
				sign[i][k] = 1;
		}
	}
	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			if (sign[m][n] == 1)
			{
				for (int p = 0; p < 5; p++)
				{
					if (a[p][n] < a[m][n])break;
					if (p == 4)
					{
						cout << m + 1 << ' ' << n + 1 << ' ' << a[m][n];
						flag = 1;
					}
				}
			}
		}
	}
	if (flag == 0)
		cout << "not found" << endl;
	
	return 0;
}