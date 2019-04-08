int main()
{
	int m, n;
	cin >> m;
	int i;
	for ( i = 1; i <= m; i++ )
	{
		cin >> n;
		double a[1000][2];
		int j;
		a[0][1] = 1;
		a[1][1] = 2;
		for ( j = 2; j < n; j++ )
			a[j][1] = a[j-1][1] + a[j-2][1];
		a[0][0] = 2;
	    for ( j = 1; j < n; j++ )
			a[j][0] = a[j-1][0] + a[j-1][1];
		double sum = 0, mul = 1;
		for ( j = 0; j < n; j++ )
			mul = mul * a[j][1];
		for ( j = 0; j < n; j++ )
			{
				a[j][0] = a[j][0] * ( mul / a[j][1] );
				sum = sum + a[j][0];
		}
		cout << fixed << setprecision(3) << sum / mul << endl;
	}
	return 0;
}


