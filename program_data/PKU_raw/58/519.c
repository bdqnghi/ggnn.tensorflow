int main()
{
	int n, i, j, n1;
	char str[200];
	cin >> n;
	cin.get();
	for (i = 1; i <= n; i++)
	{
		 j = 1;
		cin.getline(str,120);
		n1 = strlen(str);
		if (!((str[0] == '_') || ((str[0] >= 'a') && (str[0] <= 'z')) || ((str[0] >= 'A') && (str[0] <= 'Z'))))
		{
			cout << 0 << endl;
			continue;
		}
		for (j = 1; str[j] != 0; j++)
		{
			if (((str[j] >= 'a') && (str[j] <= 'z')) || ((str[j] >= '0') && (str[j] <= '9')) || (str[j] == '_') || ((str[j] >= 'A') && (str[j] <= 'Z')))
				continue;
			else
				break;
		}
		//if (j == n1)
		if (str[j] == 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}