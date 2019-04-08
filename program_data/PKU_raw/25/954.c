int main()
{
	int N, num[40] = {0}, i, j, x = 0, t;
	cin >> N;
	if (N == 0)
		cout << 1 << endl;
	else
	{
		num[0] = 1;
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < 40; j++)
			{
				t = x;
				x = num[j] * 2 / 10;
				num[j] = num[j] * 2 % 10 + t;
			}
		}
		i = 39;
		while (num[i] == 0)
			i--;
		for (; i >= 0; i--)
			cout << num[i];
		cout << endl;
	}
	return 0;
}