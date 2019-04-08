int main()
{
	char s[500];
	int n, i, j, m, b, c;
	cin >> s;
	n = strlen(s);
	for(i = 1; i < n; i++)
	{
		b = n - i - 1;
		for(m = 0; m <= b; m++)
		{
			c = 0;
			for(j = 0; j <= i; j++)
			{
				if(s[m + j] == s[m + i - j])
					c++;
			}
				if(c == i + 1)
				{
					for(j = m; j <= m + i; j++)
					{
						cout << s[j];
					}
					cout << endl;
				}
		}
	}
	return 0;
}
