int main()
{
	char letter[40];
	int n, i, blank = 0, num = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		memset(letter, '0', sizeof(letter));
		cin >> letter;
		if (strlen(letter) + blank + num > 80)
		{
			blank = 0;
			num = 0;
			cout << endl;
		}
		if (blank)
			cout << ' ';
		cout << letter;
		num += strlen(letter) + blank;
		blank = 1;
	}
	return 0;
}