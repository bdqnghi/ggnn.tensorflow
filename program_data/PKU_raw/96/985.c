
int main()
{
	char str[100];
	cin >> str;
	int len = strlen(str);
	int num1[100];
	int num2[100];
	int i;
	int num, r;
	for (i = 0; i < len; i++)
		num1[i] = str[i] - '0';
	if (len >= 3)
	{
		for (i = 0; i < len - 1; i++)
		{
			num = num1[i] * 10 + num1[i + 1];
			num2[i] = num / 13;
			r = num % 13;
			num1[i + 1] = r;
		}
		if (num2[0] != 0)
			for (i = 0; i < len -1; i++)
				cout << num2[i];
		else
			for (i = 1; i < len - 1; i++)
				cout << num2[i];
		cout << endl;
		cout << r << endl;
	}
	else if (len == 2)
	{
		int s;
		num = num1[0] * 10 + num1[1];
		s = num / 13;
		r = num % 13;
		cout << s << endl;
		cout << r << endl;
	}
	else
	{
		cout << 0 << endl;
		cout << num1[0] << endl;
	}
	return 0;
}
