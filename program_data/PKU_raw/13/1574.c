int main()
{
	int n;
	cin >> n;
	int mark[101];
	for (int i = 0; i < 101; i++)
		mark[i] = 0;
	int num[20005];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cout << num[0];
	mark[num[0]] = 1;
	for (int i = 0; i < n; i++)
	{
		if (mark[num[i]] == 0)
		{
			mark[num[i]] = 1;
			cout << " " << num[i];
		}
	}
	cout << endl;
	return 0;
}