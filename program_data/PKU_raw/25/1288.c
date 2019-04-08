int main()
{
	int N;
	cin >> N;
	const int  MAX_LEN = 210;
	unsigned num[MAX_LEN + 1] = { 0 };
	num[1] = 1;

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N; k++)
			num[k] *= 2;
		for (int k = 1; k <= N; k++)
			if (num[k] >= 10)
			{
				num[k + 1] = num[k + 1] + num[k] / 10;
				num[k] = num[k] % 10;
			}
	}
	int j = MAX_LEN;
	while (num[j] == 0)
		j--;
	for (int k = j; k > 0; k--)
		cout << num[k];
	cout << endl;
	return 0;
}