int main()
{
	char word[20000];
	int longlen = 0, shortlen = 201, t = 0, i = 0, j[2], k = 0;
	cin.getline(word, 20000);
	while (word[i] != '\0')
	{
		while (word[i] != ' ' && word[i] != ',' && word[i] != '\0')
		{
			t ++;
			i ++;
		}
		if (t > longlen)
		{
			longlen = t;
			j[0] = i;
		}
		if (t < shortlen)
		{
			shortlen = t;
			j[1] = i;
		}
		while (word[i] == ' ' || word[i] == ',')
		{
			i ++;
			t = 0;
		}	
	}
	for (i = j[0] - longlen; ; i ++)
	{
		if (word[i] == ' ' || word[i] == ',' || word[i] == '\0')
		{
			break;
		}
		cout << word[i];
	}
	cout << endl;
	for (i = j[1] - shortlen;; i ++)
	{
		if (word[i] == ' ' || word[i] == ',' || word[i] == '\0')
		{
			break;
		}
		cout << word[i];
	}
	cout << endl;
	return 0;
}
