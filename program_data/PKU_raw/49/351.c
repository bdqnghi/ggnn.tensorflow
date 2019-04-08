int main()
{
	char str[501];
	int i, j;
	cin >> str;
	for (j = 1; str[j] != '\0'; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			for (int l = j, p = 0; l >= 1; p++, l--)
			{
				if (str[i + p] != str[i + l])
				{
					break;
				}
				if (l <= 2)
				{
					for (int k = i; k <= i + j; k++)
					{
						cout << str[k];
					}
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}