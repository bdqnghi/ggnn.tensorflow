
int main()
{
	char str[1000], str2[5];
	int i, count = 0;
	cin >> str;
	for (i = 0; str[i] != '\0';)
	{
		count = 0;
		str2[0] = str[i];
		if (str2[0] <= 'z' && str2[0] >= 'a')
			str2[0] = str2[0] - 32;
		for (; str[i] == str2[0] || str[i] == str2[0] + 32;)
		{
			count++;
			if (str[i] != '\0')
				i++;
		}
		cout << "(" << str2[0] << "," << count << ")";
	}
	cout << endl;
	return 0;
}