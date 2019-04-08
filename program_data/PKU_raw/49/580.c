int main()
{
	char str[520];
	int len, i, j, k, num;
    cin >> str;
	len = strlen(str);
	for (i = 2; i <= len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			num = 0;
			for (k = 0; k < i; k++)
			{
				if (str[j + k] == str[j + i - k - 1])
					num++;
			}
			if (num == i)
			{
				for (k = 0; k < i; k++)
					cout << str[j + k];
				cout << endl;
			}
		}
	}
	return 0;
}