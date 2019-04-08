int main()
{
	int i,j,flag[101] = {0};
	char str[101];
	while(cin >> str)
	{
	for (i = 0; i < strlen(str); i ++)
	{
		cout << str[i];
		if (str[i] == ')')
		{
			for (j = i; j >= 0; j --)
			{
				if (str[j] == '(' && flag[j] == 0)
				{
					flag[i] = 1;
					flag[j] = 1;
					break;
				}
			}
		}
	}
	cout << endl;
	for (i = 0; i < strlen(str); i ++)
	{
		if (str[i] == '(' && flag[i] == 0)
			cout << "$";
		else if (str[i] == ')' && flag[i] == 0)
			cout << "?";
		else
			cout << " ";
	}
	cout << endl;
	memset(flag,0,sizeof(flag));
	}
	return 0;
}