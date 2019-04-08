int main()
{
	float a[40], b[40], t;
	char c[41][7];
	int i, j, n, m, N;
	n = 0;
	m = 0;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> c[i];
		if (c[i][0] == 'm')
		{
			n++;
			cin >> a[n];
		}
		if (c[i][0] == 'f')
		{
			m++;
			cin >> b[m];
		}
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j < i; j++)
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (i = 1; i <= m; i++)
		for (j = 1; j < i; j++)
			if (b[i] > b[j])
			{
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
   for (i = 1; i <= n; i++)
   {
       cout << fixed << setprecision(2) << a[i] <<" ";
   }
    for(i = 1; i <= m; i++)
	{
       cout << fixed << setprecision(2) << b[i] ;
	   if (i != m)
		   cout << " ";
	}
	return 0;
}