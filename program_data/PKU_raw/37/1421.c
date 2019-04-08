int main()
{
	int count[26] = {0}, t, i, j;
	char str[100000] = {'\0'};
	cin >> t;
    cin.get();
	for (i = 0; i < t; i++)
	{
        for (j = 0; j < 100000; j++)
		   str[j] = '\0';
		for (j = 0; j < 26; j++)
			count[j] = 0;
        cin.getline(str,100000);
		for (j = 0; str[j] != '\0'; j++)
		{
			count[str[j]-'a']++;
		}
		for (j = 0; j < strlen(str); j++)
		{
			if (count[str[j]-'a'] == 1)
			{
				cout << str[j] << endl;
				break;
			}
		}
		if (j == strlen(str))
			cout << "no" << endl;
		
	}
return 0;
}