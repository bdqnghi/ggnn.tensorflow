
int Judge(char c)
{
	int i, flag = 0;
	for (i = 0; i < 26; i ++)
		if (c == 'a' + i || c == 'A' + i)
		{
			flag = 1;
			break;
		}
	for (i = 0; i < 10; i ++)
		if (c - '0' == i)
		{
			flag = 1;
			break;
		}
	if (c == '_')
		flag = 1;
	return flag;
	
}

int main()
{
	int n, i, j, l, k;
	char a[81];
	cin >> n;
	cin.get();
	for (i = 0; i < n; i ++)
	{
		cin.getline(a, 81);
		l = strlen(a);
		for (j = 0; j < l; j ++)
			if (!Judge(a[j]))
			{
				cout << 0 << endl;
				break;
			}
		if (j == l)
		{
			for (k = 0; k < 10; k ++)
				if (a[0] - '0' == k)
				{
					cout << 0 << endl;
					break;
				}
			if (k == 10)
				cout << 1 << endl;
		}
	}
	return 0;
}
