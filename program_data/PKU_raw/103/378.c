int main()
{
	char str[1000];
	int flag[1000] = {0}, i = 0, j, sum[1000] = {0};
	cin >> str;
	for (i = 0; i < strlen(str); i ++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	i = 0;
	while (i < strlen(str))
	{
		if (flag[i] == 0)
		{
			for (j = i + 1;;j ++)
			{
				if (str[j] == str[i])
				{
					sum[i] ++;
					flag[j] = 1;
				}
				else
					break;
			}
			i = j;
		}
		else
			i ++;
	}
	for (i = 0; i < strlen(str); i ++)
	{
		if (flag[i] == 0)
		{
			cout << "(" << str[i] << "," << sum[i] + 1 << ")";
		}
	}
	return 0;
}
		
