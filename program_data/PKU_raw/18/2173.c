int n, i, k, j, p, q, a[110][110] = {0}, Min, sum;
int get()
{	
	for (p = 0; p < n - 1; p++)
	{
		for (k = 0; k < q; k++)
		{
			Min = 99999999;
			for (j = 0; j < q; j++)
			{
				if (Min > a[k][j])
					Min = a[k][j];
			}
			if (Min != 0)
			{
				for (j = 0; j < q; j++)
					a[k][j] -= Min;
			}
		}
		for (k = 0; k < q; k++)
		{
			Min = 99999999;
			for (j = 0; j < q; j++)
			{
				if (Min > a[j][k])
					Min = a[j][k];
			}
			if (Min != 0)
			{
				for (j = 0; j < q; j++)
					a[j][k] -= Min;
			}
		}
		sum += a[1][1];
		q--;
		for (k = 0; k < q - 1; k++)
			for (j = 0; j < q + 1; j++)
			{
				a[k+1][j] = a[k+2][j];
			}
		for (k = 0; k < q; k++)
			for (j = 0; j < q - 1; j++)
			{
				a[k][j+1] = a[k][j+2];
			}
	}
	return sum;
}
int main()
{
	cin >> n;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		q = n;
		for (k = 0; k < n; k++)
			for (j = 0; j < n; j++)
				cin >> a[k][j];
		cout << get() << endl;
	}
	return 0;
}