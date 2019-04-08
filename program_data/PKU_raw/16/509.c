int main()
{
	int n, i;
	cin >> n;
	if (n <= 9999 && n > 1000)
	{
		i = n / 1000 + n % 1000 / 100 * 10 + n % 100 / 10 * 100 + n % 10 * 1000;
		cout << i << endl;
	}
	else if (n == 1000)
		cout << "0001" << endl;
	else if (n <= 999 && n > 100) 
	{ 
		i = n / 100 + n % 100 / 10 * 10 + n % 10 * 100;
		cout << i << endl;
	}
	else if (n == 100)
		cout << "001" << endl;
		else if (n <= 99 && n > 10)
		{
			i = n % 10 * 10 + n / 10;
		}
		else if (n == 10)
			cout << "01" << endl;
			else if (n <= 9 && n >= 0)
				cout << n << endl;
				else
					cout << "00001" << endl;
	return 0;
}