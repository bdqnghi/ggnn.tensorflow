int main()
{
	char str1[102], str2[102];
	int i, j;
	while(cin.getline(str1, 102))
	{
		strcpy(str2, str1);
		int len = strlen(str1);
        for (i = 0; i < len; i++)
		{
			if (str2[i] != '(' && str2[i] != ')')
				str2[i] = ' ';
			else
			{
				if (str2[i] == ')')
				{
					for (j = i; j >= 0; j--)
					{
						if (str2[j] == '(')
						{
							str2[j] = ' ';
							str2[i] = ' ';
							break;
						}
					}
				}
			}
		}
		for (i = 0; i < len; i++)
		{
			if (str2[i] == '(')
				str2[i] = '$';
			if (str2[i] == ')')
				str2[i] = '?';
		}
		cout << str1 << endl << str2 << endl;
	}
	return 0;
}