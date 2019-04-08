int main()
{
	char num1[101], num2[101];
	int i, j, r = 0, l1;
	cin >> num1;
	l1 = strlen(num1);
	if (((l1 == 2) && ((num1[0] - '0') == 1) && ((num1[1] - '0') > 2)) || (l1 > 2) || ((l1 == 2) && ((num1[0] - '0') > 1) ))
	{
	for (i = 0; i < l1; i++)
	{
		num2[i] = (((r * 10) + num1[i] - '0') / 13) + '0' ;
		r = (r * 10 + num1[i] - '0') % 13;
	}
	if (num2[1] == '0')
	{
        for (j = 2; j < l1; j++)
		{
			cout << num2[j];
		}
	}
	else 
	{
		for (j = 1; j < l1; j++)
		{
			cout << num2[j];
		}
	}
	    cout << endl;
		cout << r;
	}
	if ((l1 == 2) && ((num1[0] - '0') == 1) && ((num1[1] - '0') <= 2))
	{
		cout << (10 + num1[1]- '0') / 13;
		cout << endl;
	    cout << (10 + num1[1]- '0') % 13;
	}
	if (l1 == 1)
	{
		cout << (num1[0] - '0') / 13;
		cout << endl;
		cout << (num1[0] - '0') %13;
	}

	return 0;
}