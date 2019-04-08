int main()
{
	char num[102];
	cin >> num;
	int i, a, b;
	char x[102];
	if (strlen(num) == 1)
	{
		cout << '0'<< endl;
		cout << num[0] << endl; 
	}
	else if(strlen(num) == 2)
	{
		a = (num[0] - 48) * 10 + (num[1] - 48);
		cout << a / 13 << endl;
		cout << a % 13 << endl;
	}
	else
	{
	a = (num[0] - 48) * 10 + (num[1] - 48);
	b = a % 13;
	if (a >= 13)
	{
		x[0] = a / 13 + 48;
		for (i = 1; i <= strlen(num) - 2; i++)
		{
			a = (num[i + 1] - 48) + b * 10;
			b = a % 13;
			x[i] = a / 13 + 48;
		}
		for (i = 0; i <= strlen(num) - 3; i++)
		{
			cout << x[i];
		}
		cout << x[strlen(num) - 2] << endl;
		cout << b << endl;
	}
	else
	{
		for (i = 2; i <= strlen(num) - 1; i++)
		{
			a = (num[i] - 48) + b * 10;
			b = a % 13;
			x[i] = a / 13 + 48;
		}
		for (i = 2; i <= strlen(num) - 2; i++)
		{
			cout << x[i];
		}
		cout << x[strlen(num) - 1] << endl;
		cout << b << endl;
	}
	}
	return 0;
}