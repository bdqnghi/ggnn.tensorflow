
char str[100];

int match(char str[], char b, char g)
{
	int i, j;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == g)
			break;
	}
	if(str[i] == '\0')
		return 0;
	for(j = i; j >= 0; j--)
	{
		if(str[j] == b)
		{
			cout << j << " " << i << endl;
			break;
		}
	}
	str[i] = '#';
	str[j] = '#';
	match(str, b, g);
}

int main()
{
	char b, g;
	cin >> str;
	b = str[0];
	int i, length;
	length = strlen(str);
	for(i = 0; i < length; i++)
	{
		if(str[i] != b)
		{
			g = str[i];
			break;
		}
	}
	match(str, b, g);
	return 0;
}



