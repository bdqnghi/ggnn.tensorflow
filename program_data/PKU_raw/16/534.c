int main()
{
	int a, b, c, d, n, n1, n2;
	cin >> n;
	a = n / 1000;
	n1 = n - 1000 * a;
	b = n1 / 100;
	n2 = n1 - 100 * b;
	c = n2 / 10;
	d = n2 - 10 * c;
	if (a == 10)
		cout << "00001" << endl;
	else if (a != 0)
		cout << d << c << b << a << endl;
	else if (b != 0)
		cout << d << c << b << endl;
	else if (c != 0)
		cout << d << c << endl;
	else cout << d << endl;
	return 0;
}






