int main()
{
	char str[500];
	int i, j, k, s, length;
	cin.getline(str,500);
	length = strlen(str);
	for (i = 2; i <= length; i++)
	{
		for (j = 0; j <= length - i; j++)
		{
			for (k = j; k < j + i/2; k++)
			{
				if (str[k] != str[2 * j + i - k - 1])
				{
					break;
				}
			}
			if (k == j + i/2)
			{
				for (s = j; s < j + i; s++)
					cout << str[s];
				cout << endl;
			}
		}
	}
	return 0;
}