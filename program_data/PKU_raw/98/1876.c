int main()
{
	char a[40];
	int n, sum = 0, i = 0;
	cin >> n;
	while (cin >> a && n > 0)
	{
		i ++;
		int len = strlen(a);
		if (i == 1)
		{
			sum = sum + len;
		}
		else
		{
			sum = sum + len + 1;
		}
		if (sum <= 80)
		{
			if (i == 1)
			{
				cout << a;
			}
			else
			{
				cout << " " << a;
			}
		}
		if (sum == 80)
		{
			cout << endl;
			sum = 0;
			i = 0;
		}
		if (sum > 80)
		{
			cout << endl;
			cout << a;
			sum = len;
			i = 1;
		}
		n --;
	}
	return 0;
}