
int main()
{
	int N;
	cin >> N;
	int num[101] = {0}, carry_in[101] = {0};
	int i, j, k;
	num[100] = 1;
	for(i = 1; i <= N; i++)
	{
		for(j = 100; j >= 1; j--)
		{
			carry_in[j] = (2 * num[j]) / 10;
			num[j] = (2 * num[j]) % 10;
		}
		for(k = 99; k >= 1; k--)
			num[k] = num[k] + carry_in[k + 1];
	}
	for(i = 1; i <= 100; i++)
	{
		if(num[i] != 0)
		{
			j = i;
			break;
		}
	}
	for(j = i; j <= 100; j++)
		cout << num[j];
	cout << endl;
	return 0;
}

