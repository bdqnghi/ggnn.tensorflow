int main()
{
	char s[600];
	cin.getline(s, 500, '\n');
	int l = 0, i = 0, j, max = 0, min = 10, mm;
	l = strlen(s);
	s[l] = ' ';
	s[l + 1] = '\0';
	while(s[i] != '\0')
	{
		j = i;
		while(s[j] != ',' && s[j] != ' ')
			j++;
		if (j - i > max)
		{	
			max = j - i;
			mm = i;
		}
		i++;
	}
	for(i = mm; i < mm + max; i++)
		cout << s[i];
	cout << endl;
	i = 0;
	while(s[i] != '\0')
	{
		if (i > 0)
		{
			if (s[i - 1] == ' ' || s[i - 1] == ',')
				;
			else
			{
				i++;
				continue;
			}
		}
		j = i;
		while(s[j] != ',' && s[j] != ' ')
			j++;
		if (j - i < min && j - i != 0)
		{	
			min = j - i;
			mm = i;
		}
		i++;
	}
	for(i = mm; i < mm + min; i++)
		cout << s[i];
	return 0;
}