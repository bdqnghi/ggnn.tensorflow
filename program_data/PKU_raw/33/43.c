int main()
{
	char	words[500];
	int		N;
	cin >> N;
	cin.get();

	for (int i = 0; i < N; i ++)
	{
		cin.getline(words, 500);
		char *p = words;
		while(*p != '\0')
		{
			if(*p == 'A')
			{cout << 'T';}
			else if(*p == 'T')
			{cout << 'A';}
			else if(*p == 'C')
			{cout << 'G';}
			else if(*p == 'G')
			{cout << 'C';}
			p ++;
		}
		cout << endl;
	}
	return 0;
}