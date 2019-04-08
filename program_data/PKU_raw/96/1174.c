int main()
{
	int start;
	int num[110] , mod;
	char number[110];
	int i , len ;
	cin >> number;
	len = strlen(number);
	if(len == 1)
	{
		cout << 0 << endl;
		cout << (number[0] - '0')% 13 << endl;
	}
	else if(len == 2 && number[0] == '1' && number[1] >= '0' && number[1] <= '2')
	{
		cout << 0 << endl;
		cout << (10 + number[1] - '0')% 13 << endl;
	}
	else
	{
	mod = (number[0] - '0') % 13;
	num[0] = (number[0] - '0') / 13;
	for(i = 1 ; i < len ; i++)
	{
		num[i] = (mod * 10 + number[i] - '0') / 13 ;
        mod = (mod * 10 + number[i] - '0') % 13;
	}
	for(i = 0 ; i < len ; i++)
		if(num[i] != 0)
		{
			start = i;
			break;
		}
	for(i = start ; i < len ; i++)
		cout << num[i];
	cout << endl;
	cout << mod << endl;
	}
	return 0;
}