int main()
{
	char str[1000000 + 10];
	int t;
	cin >> t;
	for (int n = 1; n <= t; n ++)
	{
		cin >> str;
		int len = strlen(str);
		int i, j, k, sole;
		for (i = 0; i < len; i ++)
		{
			sole = 1;
			for (j = 0; j < len; j ++)
			{
				if (i == j) continue;
				if (str[i] == str[j]) sole = 0;;
			}
			if (sole) {cout << str[i] << endl; break;}
		}
		if (i == len && sole == 0) cout << "no" << endl;
	}
	return 0;
}