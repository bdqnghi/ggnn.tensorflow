int main()
{
	int i, j, r = 0;
	char num[100] = {0};
	char result[100] = {0};
	cin >> num;
	for (i = 0; num[i] != 0; i++)
	{
		result[i] = (r * 10 + num[i] - '0') / 13 + '0';
		r = (r * 10 + num[i] - '0') % 13;
	}
    if (num[1] == 0)
	{
		j = 0;
		result[0] = 0 + '0';
	}
	else if (num[0] == '1' && num[1] < '3' && num[2] == 0)
	{
		j = 0;
		result[0] = 0 + '0';
		result[1] = 0;
	}
	else if(result[0] == '0' && result[1] == '0')
	{
		j = 2;
	}
	else 
		j = 1;
	for (i = j; ; i++)
	{
		if (result[i] == 0)
		{
			cout << endl;
			break;
		}
		else 
			cout << result[i];
	}
	cout << r << endl;
	return 0;
}