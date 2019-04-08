int main()
{
	int t, i, j;
	cin >> t;
	cin.get();
	while (t--)
	{
		int flag = 0;
		char s[10000] = {0};
		cin.getline(s, 10000);
		for (i = 0; i < strlen(s); i++)
		{
			if (i == strlen(s) - 1 && s[i] != '0') {cout << s[i] << endl; flag = 2; break;}
			if (s[i] != '0')
			{
				for (j = i + 1; j < strlen(s); j++)
				{
					if (s[j] == s[i])
					{
						s[j] = '0';
						flag = 1;
					}
				}
				if (flag) s[i] = '0';
				else {cout << s[i] << endl; flag = 2; break;}
				flag = 0;
			}
		}
		if (flag != 2) cout << "no" << endl;
	}

	return 0;
}
