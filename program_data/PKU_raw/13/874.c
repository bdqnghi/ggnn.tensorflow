
int main()
{
	int n;
	cin >> n;
	int count[100] = {0}, num[90] = {0};
	int i = 1, a, j = 0;
	for (i; i <= n; i++)
	{
		cin >> a;
		if (count[a] == 0)
		{
			num[j] = a;
			j += 1;
		}
		count[a] = count[a] + 1;
	}
	i = 0;
	for (i; i < j - 1; i++)
	{
		cout << num[i] << " ";
	}
	cout << num[j - 1] << endl;
	return 0;
}