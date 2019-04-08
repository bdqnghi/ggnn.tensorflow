
int main()
{
	int n;
	char word[33];
	char suffix[4];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> word;
		int len = strlen(word);
		if (word[len - 1] == 'r' && word[len - 2] == 'e')
		{
			word[len - 2] = '\0';
			cout << word << endl;
		}
		else if (word[len - 1] == 'y' && word[len - 2] == 'l')
		{
			word[len - 2] = '\0';
			cout << word << endl;
		}
		else if (word[len - 1] == 'g' && word[len - 2] == 'n' && word[len - 3] == 'i')
		{
			word[len - 3] = '\0';
			cout << word << endl;
		}
		else
		{
			cout << word << endl;
		}
	}
	return 0;
}