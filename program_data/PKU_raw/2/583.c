int main ()
{
	int m, i, j, num[999], store[26][999] = {0} , cal[26] = {0}, max = 0, maxnum;
	char au[999][26];
	cin >> m;
	for(i = 0; i <= m - 1; i++)
	{
		cin >> num[i];
		cin.get();
		cin.getline(au[i], 26);
		for (j = 0; ;j++)
		{
			if(au[i][j] == '\0')
				break;
			else
			{
				store[au[i][j] - 'A'][cal[au[i][j] - 'A']] = num[i];
				cal[au[i][j] - 'A']++;
			}
		}
	}
	for(i = 0; i <= 25; i++)
	{
		if (cal[i] > max)
		{
			max = cal[i];
			maxnum = i;
		}
	}
	char t = 'A' + maxnum;
	cout << t << endl << max << endl;
	for(i = 0; i < max ; i++)
	{
		cout << store[maxnum][i] << endl;
	}
	return 0;
}
	
	