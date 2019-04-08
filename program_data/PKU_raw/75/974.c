int main()
{
	int x[1001], n[1001], y[1001], num = 1, max = 0;
	char a;
	for (int i = 0; i < 1001; i++)
	n[i] = 0;
	while (cin >> x[num])
	{
		a = cin.get();
		if (a != ',')
		break;
		num++;
	}
	cin >> y[1];
	for (int i = 2; i <= num; i++)
	{
		cin.get();
		cin >> y[i];
	}
	cout << num << " ";
	for (int i = 1; i <= num; i++)
	for (int j = x[i]; j < y[i]; j++)
	n[j]++;
	for (int i = 1; i <= 1000; i++)
	if (max < n[i])
	max = n[i];
	cout << max << endl;
	return 0;
}