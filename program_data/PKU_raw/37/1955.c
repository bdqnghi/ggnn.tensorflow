int main()
{
	char str[100000], *p, d;
	int len, n, i, j, c, pos;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> str;
		len = strlen(str);
		int f[26] = {0}, po[26], min = 2000000;
		for (p = str + len - 1; p >= str; p--)
		{
			c = *p - 'a';
			f[c]++;
			po[c] = p - str;
		}
		for (j = 0; j < 26; j++)
		{
			if (f[j] == 1)
			{
				if (po[j] < min)
				{
					min = po[j];
					d = j + 'a';
				}
			}
		}
		if (min == 2000000)
			cout << "no" << endl;
		else
			cout << d << endl;
	}
	return 0;
}
