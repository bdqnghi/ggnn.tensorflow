
int main ()
{
	int m = 1, n = 1;
	while (1)
	{
		cin >> n >> m;
		if (m == 0 && n == 0)
			break;
		int a[301] = {0}, i = 0, num = 0, baoshu = 0;
		while (num != n - 1)
		{
			i++;
			if (a[i] == 0)
				baoshu++;
			if (baoshu == m)
			{
				a[i] = 1;
				baoshu = 0;
				num++;
			}
			if (i == n)
				i = 0;
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] == 0)
				cout << i << endl;
		}
	}
	return 0;
}