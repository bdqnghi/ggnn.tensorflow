int main()
{
	char str[1000];
	int count = 0, i;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == str[i + 1] || str[i] == str[i + 1] + 'a' - 'A' || str[i] == str[i + 1] + 'A' - 'a')
			count++;
		else
		{
			count++;
			if (str[i] >= 'A' && str[i] <= 'Z')
				cout << "(" << str[i] << "," << count << ")";
			else
			{
				str[i] += 'A' - 'a';
				cout << "(" << str[i] << "," << count << ")";
			}
			count = 0;
		}
	}
	cout << endl;
	return 0;
}


