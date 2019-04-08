int main()
{
	char str[2000];
	int i, t = 0;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == str[i + 1])
		{
			t++;
		}
		else
		{
			t++;
			cout << "(" << str[i] << "," << t << ")";
			t = 0;
		}
	}
	cout << endl;
	return 0;
}