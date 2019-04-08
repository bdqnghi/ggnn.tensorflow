
char str[510];
char gram[1000][6];
int sum[1000];

int main()
{
	int n, length, i, j, max, flag = -1, pos;
	cin >> n;
	cin.ignore();
	cin.getline(str, 500);
	length = strlen(str);
	//cout << length << endl;
	for (i = 0; i < length-n+1; i++)
		for (j = 0; j < n; j++)
			gram[i][j] = str[i+j];
	for (i = 0; i < 100; i++)
		sum[i] = 1;
	for (i = 0; i < length-n+1; i++)
	{
		if (gram[i][0] == '0')
			continue;
		for (j = i+1; j < length-n+1; j++)
		{ 
			if ((strcmp(gram[j], gram[i])) == 0)
			{
				sum[i]++;
				gram[j][0] = '0';
				sum[j] = 0;
			}
		}
	}
	max = 1;
	for (i = 0; i < length-n+1; i++)
	{	
		if (sum[i] > max)
		{
			max = sum[i];
			flag++;
			pos = i;
		}
	}
	if (flag == -1)
		cout << "NO" << endl;
	else
	{
		cout << max << endl;
		for (i = 0; i < length-n+1; i++)
		{
			if (sum[i] == sum[pos])
				cout << gram[i] << endl;
		}
	}
	return 0;
}