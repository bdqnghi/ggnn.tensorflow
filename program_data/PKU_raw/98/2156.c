int main()
{
	int n, i, len, p = 0;
	cin >> n;
	char str[40];
	for (i = 0; i < n; i++)
	{
		cin >> str;
		len = strlen(str);
		if (p + len < 80)
		{
			if (p != 0)
			{
				cout << " ";
				p++;
			}
			p = p + len;
		}
		else
		{
			p = len;
			cout << endl;
		}
		cout << str;
	}
	return 0;
}
