int main()
{
	char s[300] = { "\0" };
	int i, j, n = 0, l, a[60] = { '0' };
	gets(s);
	l = strlen(s);
	for (i = 0; i<l; i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if (s[i] == j)
			{
				a[j - 65] = a[j - 65] + 1;
				n = n + 1;
			}
			else;
		}
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == j)
			{
				a[j - 71] = a[j - 71] + 1;
				n = n + 1;
			}
			else;
		}
	}
	a[0] = a[0] - 48;
	if (n != 0)
	{
		for (i = 0; i<26; i++)
		{
			if (a[i] != 0)
				printf("%c=%d\n", i + 65, a[i]);
			else;
		}
		for (i = 26; i<52; i++)
		{
			if (a[i] != 0)
				printf("%c=%d\n", i + 71, a[i]);
			else;
		}
	}
	else
		printf("No");
	return 0;
}