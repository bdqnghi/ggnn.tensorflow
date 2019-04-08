int main()
{
	int i, j;
	char a[101], b[101];
	while (cin.getline(a, 101))
	{
		for (i = 0; i <= 100; i++)
			b[i] = ' ';
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '(')
				b[i] = '$';
			if (a[i] == ')')
			{
				for (j = i; j >= 0; j--)
					if (b[j] == '$')
					{
						b[j] = ' ';
						break;
					}
				if (j == -1)
					b[i] = '?';
			}
		}
		for (i = 0; a[i] != '\0'; i++)
				cout << a[i];
		cout << endl;
		for (i = 0; a[i] != '\0'; i++)
				cout << b[i];
		cout << endl;
	}
	return 0;
}
	