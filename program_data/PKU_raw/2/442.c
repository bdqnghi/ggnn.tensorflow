int main()
{
	int num[999] , count[27] = {0} , len[999];
	int m , i , j , max = 0 , per;
	cin >> m;
	char ch[999][26] , person;
	for (i = 1 ; i <= m ; i++)
	{
		cin >> num[i] >> ch[i];
		len[i] = strlen (ch[i]);
		for (j = 0 ; j <= len[i] - 1 ; j++)
		{
			count[ch[i][j] - 64]++;
		}
	}
	for (i = 1 ; i <= 26 ; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			per = i;
		}
	}
	person = per + 64;
	cout << person << endl;
	cout << count[per] << endl;
    for (i = 1 ; i <= m ; i++)
	{
		for (j = 0 ; j <= len[i] - 1 ; j++)
		{
			if (ch[i][j] == person)
			{
				cout << num[i] << endl;
				break;
			}
		}
	}
	return 0;
}
