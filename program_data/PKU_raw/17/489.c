
int main()
{
	char a[101] = {'\0'}, b[101] = {'\0'};
	int i, j;
	while (cin.getline(a, 101))
	{
		for (i = 0;i < 101; i++)
		{
			if (a[i] == '\0')
				break;
			if (a[i] == '(')
				b[i] = '$';
			else if (a[i] == ')')
				b[i] = '?';
			else
				b[i] = ' ';
			if (a[i] == ')')
			{
				for (j = i; j >= 0; j--)
				{
					if (a[j] == '(' && b[j] == '$')
					{
						b[i] = ' ';
						b[j] = ' ';
						break;
					}
				}
			}
		}
		cout << a << endl;
		cout << b << endl;
		for (i = 0; i < 101; i++) 
		{
			a[i] = '\0';
			b[i] = '\0';
		}
	}
	return 0;
}