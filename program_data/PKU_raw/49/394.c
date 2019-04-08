int main()
{
	char a[500];
	int k[500] = {0};
	int times = 0;
	cin >> a;
	int t = strlen(a);
	for (int x = 0; x < t; x++)
		if (a[x] - 'a' == a[x + 1] - 'a')
		{
			k[x] = 1;
			cout << a[x] << a[x + 1] << endl;
		}
	for (int m = 1; m < t / 2; m++)
	{
		for (int i = 0; i < t; i++)
		{
			if (k[i] == 1)
			{
				int flag = 0;
				int l = 1;
				for (; l <= m; l++)
				{
					if (a[i - l] - 'a' != a[i + l + 1] - 'a')
						flag = 1;
				}
				if (flag == 0 && l == m + 1)
				{	
					for (int q = i - m; q <= i + m + 1; q++)
						cout << a[q];
					cout << endl;
				}
			}
		}
	}
	return 0;
}