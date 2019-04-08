int main()
{
	int n, i, l;
	char str[256], *p = NULL;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> str;
		l = strlen(str);
		for (p = str; p < str + l; p++)
		{
			if (*p == 'A')
				cout << 'T';
			else if (*p == 'T')
				cout << 'A';
			else if (*p == 'C')
				cout << 'G';
			else
				cout << 'C';
		}
		cout << endl;
	}
	return 0;
}