
int main()
{
	int time[1001] = {0}, tin[1001], tout[1001];
	char a = ',';
	int p_num = 1;
	cin >> tin[1];
	while ((a = getchar()) != '\n')
	{
		p_num++;
		cin >> tin[p_num];
	}
	p_num = 1;
	cin >> tout[1];
	while ((a = getchar()) != '\n')
	{
		p_num++;
		cin >> tout[p_num];
	}
	for (int p = 1; p <= p_num; p++)
		for (int i = tin[p]; i < tout[p]; i++)
			time[i]++;
	int p_max = 0;
	for (int i = 0; i <= 1000; i++)
		if (p_max < time[i])
			p_max = time[i];
	cout << p_num << ' ' << p_max;

	return 0;
}