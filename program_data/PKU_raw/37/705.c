int main()
{
	char c;
	int letter[26][2] = {0}, i = 0, j, n, flag = 26;
	cin >> n;
	c = getchar();
	for (; n > 0; n--)
	{
		c = getchar();
		while (c != '\n')
		{
			letter[c - 'a'][0]++;
			if (letter[c - 'a'][1] == 0)
			{
				letter[c - 'a'][1] = i;
				i++;
			}
			c = getchar();
		}
		for (i = 0; i < 26; i++)
		{
			if (letter[i][0] == 1 && letter[i][1] < flag)
			{
				j = i;
				flag = letter[i][1];
			}
			letter[i][0] = 0;
			letter[i][1] = 0;
		}
		if (flag == 26)
			cout << "no";
		else
			putchar(j + 'a');
		cout << endl;
		flag = 26;
		i = 0;
	}
return 0;
}