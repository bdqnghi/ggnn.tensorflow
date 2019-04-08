int main()
{
	int t, i, j, k, wordnum[26];
	char inword, word[26];
	cin >> t;
	cin.get();
	for (i = 0; i < t; i++)
	{
		for (k = 0; k < 26; k++)
			wordnum[k] = 0;
		inword = cin.get();
		j = k = 0;
		while(inword != '\n')
		{
			for (k = 0; k < j; k++)
				if (inword == word[k])
					break;
			if (k == j)
			{
				word[k] = inword;
				wordnum[k]++;
				j++;
			}
			else
				wordnum[k]++;
			inword = cin.get();
		}
		for (k = 0; k < j; k++)
			if (wordnum[k] == 1)
			{
				cout << word[k] << endl;
				break;
			}
		if (k == j)
			cout << "no" << endl;
	}
	return 0;
}