

int main()
{
	int n;
	cin >> n;
	char num[100];
	int add[100] ={0};
	int i, j, flag[100] ={0};
	num[99] = '1';
	flag[99] = 1;
	for (i = 0; i < 99; i ++)
		num[i] ='0';
	if ( n == 0 )
		cout << num[99];
	for (i = 1; i <= n; i ++)
	{
		for (j = 99; flag[j] == 1; j -- )
		{
			if ((num[j] - '0') * 2 < 10 )
				num[j] = (num[j] - '0') * 2 + '0';
			else
			{
				add[j - 1] = (num[j] - '0') * 2 / 10;
				num[j] = ((num[j] - '0') * 2) %10 + '0';
			}
		}
		if ( add[j] == 1 )
			flag[j] = 1;
		for ( j = 0; j < 100; j ++ )
		{
			num[j] = add[j] + num[j];
			add[j] = 0;
		}
	}
	if ( n != 0 )
	{
		for (i = 0; i < 100; i ++ )
			if (flag[i])
				cout << num[i];
	}
	return 0;
}


