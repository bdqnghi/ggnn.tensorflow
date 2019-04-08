char str[100][10001];
int main()
{
	int i, j, k, n, num[26], l;
	cin >> n;
	cin.get();
	for(i = 0; i < n; i++)
		cin.getline(str[i], 10001);
	for(i = 0; i < n; i++)
	{
		memset(num, 0, sizeof(num));
		for(j = 0; str[i][j] != '\0'; j++)
		{
			for(k = 0; k < 26; k++)
			{
				if(str[i][j] == 'a' + k)
					num[k]++;
			}
		}
		for(j = 0; str[i][j] != '\0'; j++)
		{
			l = str[i][j] - 'a';
			if(num[l] == 1)
			{
				cout << str[i][j] << endl;
				break;
			}
		}
		for(k = 0; k < 26; k++)
		{
			if(num[k] == 1)
				break;
		}
		if(k == 26)
			cout << "no" << endl;
	}
	return 0;
}



