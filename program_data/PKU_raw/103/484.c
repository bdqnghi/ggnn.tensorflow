



int main()
{
	char ch[1001];
	int num[1001] = {0};
	int i, j = 0, nlen;
	cin.getline(ch, 1001);
	nlen = strlen(ch);
	for (i = 0; i < nlen; i++)
	{
		if ((ch[i] == ch[i + 1]) || ((ch[i] - ch[i + 1]) == ('a' - 'A')) || ((ch[i] - ch[i + 1]) == ('A' - 'a')))
			num[j]++;
		else
		{
			num[j]++;
			j++;
		}
	} 
	for (i = 0, j = 0; i < 1001; i++)
	{
		if (num[i] != 0)
		{
			j = j + num[i];
			cout << '(' ;
			if (ch[ j - num[i]] >= 'A' && ch[j - num[i]] <= 'Z')
				cout << ch[j - num[i]];
			else if (ch[ j - num[i]] >= 'a' && ch[ j - num[i]] <= 'z')
				cout <<(char)(ch[ j - num[i]] - 'a' + 'A');
			cout << ',' << num[i] << ')';
		}
	}
	return 0;
}

