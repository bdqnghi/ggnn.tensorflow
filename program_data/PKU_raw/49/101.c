int main()
{
	char str[502];
	cin >> str;
	int i,j,len1,len2;
	len1 = strlen(str);
	for(len2 = 2; len2 < len1; len2++)
	{
		for(i = 0; i < len1; i++)
		{
			for(j = i; j < i + len2; j++)
			{
				if(str[j] != str[2 * i + len2 - 1 - j])
					break;
			}
			if(j == i + len2)
			{
				for(j = i; j < i + len2; j++)
					cout << str[j];
				cout << endl;
			}
		}
	}
	return 0;
}