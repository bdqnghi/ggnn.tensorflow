int flag = 0;
void f(int i, int j, char str[], char ch)
{
	if (flag == 1)
	{
		return;
	}
	if (i < 0)
	{
		f(j, j + 1, str, ch);
	}
	if (str[i] == str[0])
	{
		if (str[j] == ch)
		{
			cout << i << " " << j << endl;
			if (str[j + 1] == '\0')
			{
				flag = 1;
			}
			str[i] = str[j] = ' ';
			f(i - 1, j + 1, str, ch);
		}
		else
		{
			f(j, j + 1, str, ch);
		}
	}
	else
	{
		f(i - 1, j, str, ch);
	}
}
int main()
{
	char str[200], ch;
	int i, a = 0;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != str[0])
		{
			ch = str[i];
			f (i - 1, i, str, ch);
			return 0;
		}
	}
}