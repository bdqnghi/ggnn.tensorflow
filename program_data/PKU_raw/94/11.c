int main()
{
	int N, i, temp, m = 0, p, j;
	int a[500] = {0}, b[500] = {0};
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
		if (a[i] % 2 != 0) {b[m] = a[i]; m = m + 1;}
	}
	for (i = 0; i < m-1; i++)
	{
		p = i;
		for (j = i + 1; j < m; j++)
			if (b[p] > b[j]) 
			{

				temp = b[p];
				b[p] = b[j];
				b[j] = temp;
			}
	}
	cout << b[0];
	for (i = 1; i < m; i++)
		cout << ',' << b[i];
	return 0;
}
