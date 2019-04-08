int main()
{
	int a[6][6], b[6];
	int i, j, k, m = 0, n, t;
	for (i = 1; i < 6; i++)
	{
		for(j = 1; j < 6; j++)
		{
			cin >> a[i][j];
		}
	}
	for (k = 1; k < 6; k++)
	{
		b[k] = a[k][1];
	}
	for (i = 1; i < 6; i++)
	{
		t = 0;
		for (j = 1; j < 6 ; j++)
		{
			if (b[i] <= a[i][j])
			{
				b[i] = a[i][j];
				n = j;
			}
		}
		for (k = 1; k < 6; k++)
		{
			if (b[i] > a[k][n])
			{
				t = 1;
			}
		}
		if (t == 0)
		{
			cout << i << " " << n << " " << b[i];
			m = 1;
		}
	}
	if (m == 0)
	{
		cout << "not found" << endl;
	}
	return 0;
}