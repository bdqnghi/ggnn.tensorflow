int main()
{
	int m, a, i, j, k, n, s[26][999] = {0}, p[26] = {0};
	char b[26], c;
	cin >> m;
	for(i = 0; i < m; i++)
	{
		cin >> j;
		cin >> b;
		n = strlen(b);
		for(k = 0; k < n; k++)
		{
			a = b[k] - 'A';
			s[a][p[a]] = j;
			p[a] ++;
		}
	}
	j = 0;
	for(i = 1; i < 26; i++)
	{
		if(p[j] < p[i])
			j = i;
	}
	c = 'A' + j;
	cout << c << endl << p[j] << endl;
	for(i = 0; ; i++)
	{
		if(s[j][i] != 0)
			cout << s[j][i] << endl;
		else break;
	}
	return 0;
}