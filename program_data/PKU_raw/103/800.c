
int main ()
{
	char str[1000];
	cin >> str;
	int i, len, count = 1;
	len = strlen(str);
	for (i = 0; i < len; i++ )
	{
		if (str[i] - 'a' >= 0 && str[i] - 'z' <= 0)
		{
			str[i] = str[i] - 32;
		}
	}
	if (len == 1)
	{
		cout << "(" << str[0] << "," << count << ")" ;
	}
	else
	{
		for (i = 0; i < len - 1; i++ )
		{
			count = 1;
			while (str[i] == str[i + 1])
			{
				count++ ;
				i++ ;
			}
			cout << "(" << str[i] << "," << count << ")" ;
		}
		if (count == 1)
		{
			cout << "(" << str[i] << "," << count << ")";
		}
	}
	cout << endl;

	return 0;
}