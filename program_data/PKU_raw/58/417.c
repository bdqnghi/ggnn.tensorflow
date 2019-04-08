int main()
{
	int n;
	cin >> n;
	cin.get();
	char word[81];
	int j, i;
	for (i = 1;i <= n; i++)
	{
		cin.getline(word, 81);
		int flag = 0;
		if (word[0] != '_' && (word[0] < 'a' || word[0] > 'z') && (word[0] < 'A' || word[0] > 'Z'))
		{
			cout << flag << endl;
		}
		else
		{
			for (j = 0; word[j] != '\0'; j++)
			{
				if (word[j] == '_' || (word[j] >= 'a' && word[j] <= 'z') || (word[j] >= 'A' && word[j] <= 'Z') || (word[j] >= '0' && word[j] <= '9'))
					continue;
				else 
				{

					break;
				}
			}
			if (word[j] == '\0')
				flag = 1;
			cout << flag << endl;
		}
		cin.clear();
	}
	return 0;
}