
char str[101];

void match(int, char, char);

int main()
{
	cin.getline(str,101);
	char b = str[0];   //??????
	int len = strlen(str);
	char g = str[len - 1];   //??????
	match(0, b, g);
	return 0;
}

void match(int i, char b, char g)
{
	int j;
	if (str[i] == '\0')
		return;
	if (str[i] == g)
	{
		str[i] = '*';
		for (j = i - 1; j >= 0; j--)
		{
			if (str[j] == b)
			{
				str[j] = '*';
				break;
			}
		}
		cout << j << " " << i << endl;
	}
	match(i + 1, b, g);
	return;
}