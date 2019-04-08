



int main()
{
	char ch[10000];
	int i, j, k, t, m, nlen;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		int flag = 0, l = 0;
		memset(ch, 0, sizeof(ch));
		int a[26] = {0};
		int b[26] = {0};
		cin >> ch;
		nlen = strlen(ch);
		for (j = 0; j < nlen; j++)
			a[ch[j] - 'a']++;
		for (k = nlen - 1; k >= 0; k--)
		{
			if (a[ch[k] - 'a'] == 1)
			{
				m = k;
				flag = 1;
			}
		}
		if (flag == 0)
			cout << "no";
		else
		{
			cout << ch[m];
			cout << endl;
		}
	}
	return 0;
}

