int main()
{
	char word[100];
	int i, len, flag = 0;
	cin.getline(word, 100);
	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		if (word[i] != ' ')
		{	
			cout << word[i];
			flag = 1;
		}
		else if (flag == 1)
		{
			cout << " ";
			flag = 0;
		}
	}
	return 0;
}
