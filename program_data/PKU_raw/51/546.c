
int main()
{
	char sen[501], gram[500][6];
	int n, temp[500] = {0}, max = 1;
	cin >> n;
	cin.get();
	cin.getline(sen, 501);
	int l = strlen(sen);
	for(int i = 0; i <= l - n; i++)
	{
		for(int j = 0; j < n; j++)
			gram[i][j] = sen[i + j];
		gram[i][n] = '\0';
	}
	for(int i = 0; i < l - n;  i++)
	{
		if(temp[i])
			continue;
		temp[i] ++;
		for(int j = i + 1; j <= l - n; j++)
		{
			if(temp[j])
				continue;
			if(strcmp(gram[i], gram[j]))
				continue;
			temp[i] ++;
			temp[j] ++;
		}
		if(temp[i] > max)
			max = temp[i];
	}
	if(max == 1)
		cout << "NO" << endl;
	else
	{
		cout << max << endl;
		for(int i = 0; i <= l - n; i++)
			if(temp[i] == max)
				cout << gram[i] << endl;
	}
	return 0;
}