int main()
{
	int n, a, b, c, d, e;
	cin >> n;
	a = n / 10000;
	b = (n - 10000 * a) / 1000;
	c = (n - 10000 * a - 1000 * b) / 100;
	d = (n - 10000 * a - 1000 * b - 100 * c) / 10;
	e = n - 10000 * a - 1000 * b - 100 * c - 10 * d;
	if(a != 0)
		cout << e << d << c << b << a << endl;
	else if(b != 0)
		cout << e << d << c << b << endl;
	else if(c != 0)
		cout << e << d << c << endl;
	else if(d != 0)
		cout << e << d << endl;
	else cout << e << endl;
	return 0;
}