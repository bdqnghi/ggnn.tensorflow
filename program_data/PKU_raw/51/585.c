int main()
{
	char word[600];
	char gram[600][10] , temp[600][10];
	int cnt[600];
	int count=0;
	int i , j , n  , len , max = 1;
	cin >> n;
	cin.get();
	cin.getline(word,600);
	len = strlen(word);
	for(i = 0 ; i < 600 ; i++)
		cnt[i] = 0;
	for(i = 0 ; i <  len - n + 1 ; i++)
	{
		for(j = i ; j <= i + n - 1 ; j++)
		{
			gram[i][count] = word[j];
			count++;
		}
		gram[i][count] = '\0';
		count = 0;
	}
	for(i = 0 ; i < len - n + 1 ; i++)
		strcpy(temp[i],gram[i]);
	for(i = 0 ; i < len - n + 1 ; i++)
		for(j = 0 ; j < len - n + 1 ; j++)
		{
			if(strcmp(gram[i],temp[j]) == 0)
				cnt[i]++;
		}
	for(i = 0 ; i < len - n + 1 ; i++)
	{
		if(cnt[i] > max)
			max = cnt[i];
	}
	if(max > 1)
	{
		cout << max << endl;
		for(i = 0 ; i < len - n + 1 ; i++)
		{
			if(cnt[i] == max && i == 0)
				cout << gram[i] << endl;
			if(cnt[i] == max && i > 0)
			{
				for(j = 0 ; j < i  ; j++)
				{
					if(strcmp(gram[i],gram[j]) == 0)break;
					if(j == i - 1)
						cout << gram[i] << endl;
				}
			}
		}
	}
	else
		cout << "NO" << endl;
	return 0;
}
