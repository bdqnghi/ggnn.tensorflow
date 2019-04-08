int main()
{
	char str[100][10010];
	int num[26];
	int len , cnt , i , j , k ,t;
	cin >> t;
	for(i = 0 ; i < t ; i++)
		cin >> str[i];
	for(j = 0 ; j < t ; j++)
	{
		cnt = 0;
		for(i = 0 ; i < 26 ; i++)
			num[i] = 0;
		len = strlen(str[j]);
		for(k = 0 ; k < len ; k++)
			num[str[j][k] - 'a']++;
		
		for(i = 0 ; i < len ; i++)
		{
			
			if(num[str[j][i] - 'a'] == 1)
			{
				cout << str[j][i] << endl;
				cnt++;
				break;
			}
		}
		if(cnt == 0)
			cout <<"no"<<endl;
	}
	return 0;
}