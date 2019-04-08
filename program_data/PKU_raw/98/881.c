int main()
{
	int t = 0, n, flag[10000] = {0};
	char word[10000][40];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> word[i];
	cout << word[0];
	t = strlen(word[0]);
	for (int i = 1; i < n; i++)
	{
		int l = strlen(word[i]) + 1;
		t = t + l;
		if (t < 81)
			cout << " " << word[i];
		if (t >= 81)
		{
			cout << endl << word[i];
			t = strlen(word[i]);
		}
	}
	return 0;
}
