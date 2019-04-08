int main()
{
	int n;
	cin >> n;
	int i = 0, j = 0;
	int tiaohuai = 0;
	int tiao[200];
	memset(tiao, 0, sizeof(tiao));
	int pro = 0;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> tiaohuai;
		for (j = 0; j <= tiaohuai - 1; j++)
		{
			cin >> pro;
			tiao[pro + 3 * j + 1] = 1;
		}
		count = 0;
		for (j = 1; j <= 60;)
		{
			if (tiao[j] == 0)
			{
				j++;
				count++;
			}
			else 
				j += 3;
		}
		cout << count << endl;
		memset(tiao, 0, sizeof(tiao));
	}
	return 0;
}
