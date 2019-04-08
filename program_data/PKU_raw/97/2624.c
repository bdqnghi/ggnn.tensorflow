
int main()
{
	int n, a, b, c, d, e;
	cin >> n;

	a = n/100;
	if (a != 0 )	
	{
		cout << a << endl;
		n = n % 100;
	}
	else cout << "0" << endl;


	b = n / 50;
	if (b != 0)
	{
		cout << b << endl;
		n = n % 50;
	}
	else cout << "0" << endl;


	c = n / 20;
	if (c != 0)
	{
		cout << c << endl;
		n = n % 20;
	}
	else cout << "0" << endl;


	d = n / 10;
	if (d != 0)
	{
		cout << d << endl;
		n = n % 10;
	}
	else cout << "0" << endl;


	e = n / 5;
	if (e != 0)
	{
		cout << e << endl;
		n = n % 5;
	}
	else cout << "0" << endl;

	cout << n << endl;
	return 0;
}