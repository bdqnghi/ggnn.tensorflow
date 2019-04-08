//????
int main()
{
	int n = 0, i = 0, j = 0;
	cin >> n;
	char str[41][7];
	double a[41];
	for (i = 1; i <= n; i++)
	{
		cin >> str[i] >> a[i];
	}
	double temp1 = 0;
	char temp2[7];
	for (i = 1; i < n; i++)
		for (j = 1; j <= n - i; j++)
		{
			if (strlen(str[j]) > 5 && strlen(str[j + 1]) < 5)
			{
				strcpy(temp2, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp2);
				temp1 = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp1;
			}
		}
		int m = 0;
		for (i = 1; i <= n; i++)
		{
			if (strlen(str[i]) > 5)
				break;
		}
		m = i - 1;
		for (i = 1; i < m; i++)
			for (j = 1; j <= m - i; j++)
			{

				if (a[j] > a[j + 1])
				{
					temp1 = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp1;
				}
			}
			for (i = m + 1; i < n; i++)
				for (j = m + 1; j <= (n - i + m); j++)
				{
					if (a[j] < a[j + 1])
					{
						temp1 = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp1;
					}
				}
				cout << fixed << setprecision(2) <<  a[1];
				for (i = 2; i <= n; i++)
				{
					cout << ' ' << a[i];
				}
				cout << endl;
				return 0;
}



