
int main()
{
	int a[200] = {0}, i, flag = 0;
	a[199] = 1;
	int n;
	cin >> n;
	while (n != 0)
	{
		flag = 0;
		for (i = 199; i >= 0; i--)
		{
			if (a[i] * 2 >= 10)
			{
				a[i] = a[i] * 2 - 10 + flag;
				flag = 1;
			}
			else
			{
				a[i] = a[i] * 2 + flag;
				flag = 0;
			}
		}
		n--;
	}
	for (i = 0; a[i] == 0; i++)
	{}
	for (;i <= 199; i++)
	{
		cout << a[i];
	}

	return 0;
}

