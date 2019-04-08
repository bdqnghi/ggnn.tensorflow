
int main()
{
	int N, i, j, count, flag;
	char num[1000];
	for (i = 0; i < 1000; i++)
	{
		num[i] = '0';
	}
	num[0] = '1';
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		count = 999;
		while (num[count] == '0')
			count--;
		count++;
		j = 0;
		flag = 0;
		while (j <= count)
		{
			num[j] = 2 * num[j] - '0';
			if (flag == 1)
			{
				num[j]++;
			}
			if (num[j] > '9')
			{
				num[j] -= 10;
				flag = 1;
			}
			else flag = 0;
			j++;
		}
	}
	count = 100;
	while (num[count] == '0')
		count--;
	for (i = count; i >= 0; i--)
	{
		cout << num[i];
	}
	cout << endl;
	return 0;
}

