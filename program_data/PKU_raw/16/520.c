int main()
{
	int n ;
	int a, b, c, d, e;
	cin >> n;
	int x;
	x = n;
	a = n / 10000;
	n = n - a * 10000;
	b = n / 1000;
	n = n - b * 1000;
	c = n / 100;
	n = n - c * 100;
	d = n / 10;
	e = n - d * 10;
	if (x < 10)
		cout << e << endl;
	else if (( x >= 10) && (x < 100))
		cout << e << d << endl;
	else if ((x >= 100) && (x < 1000))
		cout << e << d << c << endl;
	else if ((x >= 1000) && (x < 10000))
		cout << e << d << c << b << endl;
	else 
		cout << "00001"<< endl;
	return 0;
}