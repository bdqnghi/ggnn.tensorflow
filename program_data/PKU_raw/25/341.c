int main()
{
	int N, i, j, flag = 0;
	cin >> N;
	int str[1000] = {0};
	str[0] = 1;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 1000; j++)
			str[j] = str[j] * 2;
		for (j = 0; j < 1000; j++)
			if (str[j] > 9)
			{
				str[j + 1] += str[j] / 10;
				str[j] = str[j] % 10;
			}
	}
	for (i = 999; i >= 0; i--)
	{
		if (str[i] != 0)
			flag = 1;
		if (flag)
			cout << str[i];
	}
	return 0;
}