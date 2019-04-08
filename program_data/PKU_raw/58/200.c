int main()
{
	int n ,len;
	int flag[1000];
	int i, j, k, a;
	for(a = 0; a <1000; a++)
		flag[a] = 1;
	cin >> n;
	cin.get();
	char str[81];
	for(i = 1; i <= n; i++)
	{
		cin.getline(str, 81);
		len = strlen(str);
		for(j = 0; j < len; j++)
		{
			if(str[0] == '_' || (str[0] - 'a' < 26 && str[0] - 'a' >= 0) || (str[0] - 'A' < 26 && str[0] - 'A' >= 0))
			{
				if(str[j] == '_' || (str[j] - 'a' < 26 && str[j] - 'a' >= 0) || (str[j] - 'A' < 26 && str[j] - 'A' >=0) || (str[j] - '0' <= 9 && str[j] - '0' >= 0))
				{
				}
				else
				{
					flag[i] = 0;
					break;
				}
			}
			else
			{
				flag[i] = 0;
				break;
			}
		}
	}
	for(i = 1; i <= n; i++)
	{
		cout << flag[i] << endl;
	}
	return 0;
}