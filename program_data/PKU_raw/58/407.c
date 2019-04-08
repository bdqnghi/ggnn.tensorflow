int main()
{
	char str[200][81];
	int i, j, k, n, count;
	cin >> n;
	cin.get();
	for(k = 0; k < n; k++)
		cin.getline(str[k], 81);
	for(i = 0; i < n; i++)
	{
		count = 0;
		for(j = 0; str[i][j] != 0; j++)
		{
			if(str[i][0] != '_' && (str[i][0] < 'A' || str[i][0] > 'z'))
			{
				count++;
				break;
			}
			if(str[i][j] != '_' && (str[i][j] < 'A' || str[i][j] > 'z') && (str[i][j] < '0' || str[i][j] > '9'))
				count++;
		}
		if(count == 0)
			cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}