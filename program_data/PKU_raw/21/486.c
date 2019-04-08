int main()
{
	int n;
	double sum = 0.0;
	double ave;
	double a[300];
	double b[300];
	double c[300] = {0.0};
	int d[300];
	int i, j, num = 0;
	double temp;
	cin >> n;
	for ( i = 0; i < n; i++ )
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	for ( i = 0; i < n - 1; i++ )
		for ( j = 0; j < n - 1 - i; j++ )
			if ( a[i] < a[j] )
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	ave = sum / n;
	for( i = 0; i < n; i++ )
	{
		b[i] = fabs(a[i] - ave);
	}
	double max = 0.0;
	for( i = 0; i < n; i++ )
		if ( b[i] > max )
			max = b[i];
	for( i = 0; i < n; i++ )
		if ( (max - b[i]) < 1e-6 )
			num++;
	if ( num == 1 )
	{
		for ( i = 0; i < n; i++ )
			 if ( (max - b[i]) < 1e-6 )
			cout << a[i] << endl;
			 }
	if ( num > 1 )
	{
		for ( i = 0; i < n; i++ )
		{
			if ( (max - b[i]) < 1e-6 )
			{
				if ( num == 1 )
				cout << a[i];
				if ( num > 1 )
				{
					cout << a[i] << ",";
					num--;
				}
			}
		}
	}

	return 0;
}

