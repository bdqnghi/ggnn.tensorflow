void change(char words[])
{
	int len = strlen(words);
	int i = 0;
	int d = 'A' - 'a';
	for(i = 0; i < len; i++)
	{
		if(words[i] <= 'z'&& words[i] >= 'a')
		{
			words[i] = words[i] + d;
		}
	}
}
int main()
{
	char words[100];
	cin >> words;
	change(words);
	char mark = words[0];
	int sum = 0, len = strlen(words);
	for(int i = 0; i < len; i++)
	{
		if(words[i] == mark)
		{
			sum++;
		}
		else
		{
			cout << "(" << mark << "," << sum << ")";
			mark = words[i];
			sum = 1;
		}
	}
	cout << "(" << mark << "," << sum << ")";
	return 0;
}