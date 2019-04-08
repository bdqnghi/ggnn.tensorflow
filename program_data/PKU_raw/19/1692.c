int main()
{
	int i, k = 0, m = 0;
	char s[1000], a[101], b[101];
	char word[30][101];
	cin.getline(s, 1000);
	cin.getline(a, 101);
	cin.getline(b, 101);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			word[k][m] = s[i];
			m++;
		}
		else
		{
			word[k][m] = '\0';
			k++;
			m = 0;
		}
	}
	for (i = 0; i<= k; i++)
	{
		if (strcmp(word[i], a) == 0)
			strcpy(word[i], b);
	}
	for(i = 0; i < k; i++)
		cout << word[i] << ' ';
	cout << word[k];
	cin >> k;
	return 0;
}