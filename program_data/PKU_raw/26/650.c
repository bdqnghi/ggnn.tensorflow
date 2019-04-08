int main()
{
	char word[100];
	int len, i;
	cin.getline(word, 100);
	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		if (word[i] == ' ')
		{
			cout << " ";
			while (word[i] == ' ')
				i++;
		}
		cout << word[i];
	}
	return 0;
}