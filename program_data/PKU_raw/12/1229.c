int main()
{
	int num[16];
	int i, j, n, sum;
	for (; ;)
	{
		sum = 0;
		for (i = 0; ; i++)
		{
			cin >> num[i];
			if ((num[i] == 0) || (num[i] == -1))
				break;
		}
		if (num[i] == -1)
		{
			break;
		}
		n = i;
		for (i = 0; i < n - 1; i++)
		{
			for(j = i + 1; j <= n - 1; j ++)
			{
				if ((num[j] == num[i] * 2) || (num[i] == num[j] * 2))
					sum = sum + 1;
			}
		}
		cout << sum << endl;
	}
	return 0;
}