int main()
{
	int n, i, j, k = 0;
	cin >> n;
	int num = n * (n - 1) / 2;
	int a[10][3];
	for ( i = 0; i < n; i++)
		for ( j = 0; j < 3; j++)
			cin >> a[i][j];
	double b[10][10];
	double c[45];
	for ( i = 0; i < n - 1; i++)
		for ( j = i + 1; j < n; j++)
			{
				double len1, len2, len3;
				len1 = pow(a[i][0] - a[j][0], 2.0);
				len2 = pow(a[i][1] - a[j][1], 2.0);
				len3 = pow(a[i][2] - a[j][2], 2.0);
				b[i][j] = sqrt(len1 + len2 + len3);
				c[k++] = b[i][j];
			}
	double temp;
	for(i = 0; i < num - 1; i++)
		for (j = 0; j < num - 1 - i; j++)
		{
			if ((c[j] < c[j + 1]) )
			{
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	for (k = 0; k < num; k++)
	{
		if (k == 0)
		{
			for ( i = 0; i < n; i++)
				for ( j = i + 1; j < n; j++)
					if (fabs(b[i][j] - c[k]) < 1e-9)
					{
						cout << fixed;
						cout << "(" << a[i][0] << "," << a[i][1] << "," << a[i][2] << ")" << "-";
						cout << "(" << a[j][0] << "," << a[j][1] << "," << a[j][2] << ")";
						cout << "=" << setprecision(2) << b[i][j] << endl;
					}
		}
		else
		{
			while (fabs(c[k] - c[k - 1]) < 1e-9)
				k++;
			for ( i = 0; i < n; i++)
				for ( j = i + 1; j < n; j++)
					if (fabs(b[i][j] - c[k]) < 1e-9)
					{
						cout << fixed;
						cout << "(" << a[i][0] << "," << a[i][1] << "," << a[i][2] << ")" << "-";
						cout << "(" << a[j][0] << "," << a[j][1] << "," << a[j][2] << ")";
						cout << "=" << setprecision(2) << b[i][j] << endl;
					}
		}
    }
	return 0;
}
