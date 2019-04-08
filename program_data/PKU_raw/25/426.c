int main()
{
	int n,sum = 1, i, j, temp = 0, l;
	cin >> n;
	char str[40];
	for(i = 0; i < 40; i++)
	{
		str[i] = '0';
	}
	str[0] = '1';
	for(i = 1; i <= n; i++)
	{
		temp = 0;
		for(j = 0; j < 40; j++)
		{
			if(2 * (str[j] - '0') + temp >= 10)
			{
				str[j] = 2 * (str[j] - '0') - 10 + temp + '0';
				temp = 1;
			}
			else
			{
				str[j] = 2 * (str[j] - '0') + temp + '0';
				temp = 0;
			}
		}
	}
	for(i = 0; i < 40; i++)
	{
		if(str[i] == '0' && str[i + 1] == '0' && str[i + 2] == '0')
		{
			l = i;break;
		}
	}
	for(i = l - 1; i >= 0;i--)
	{
		cout << str[i];
	}
	return 0;
}