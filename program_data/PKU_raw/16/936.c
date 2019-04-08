int main ()
{
	int n, a = 10, b = 10, c = 10, d;
	cin >> n;
	if (n == 10000) 
		cout << "1" << endl;
	else
	do
	{
		a--;
	} while ((n - a * 1000 < 0) || (n - a * 1000 >= 1000));
		n = n - a * 1000; 
	do
	{
		b--;
	} while ((n - b * 100 < 0) || (n - b * 100 >= 100));
		n = n - b * 100; 
	do
	{
		c--;
	} while ((n - c * 10 < 0) || (n - c * 10 >= 10));
		n = n - c * 10; 
	d=n;
	if ((a == 0) && (b == 0) && (c == 0))
		cout << d << endl;
	else if ((a == 0) && (b == 0))
		cout << d << c << endl;
	else if (a == 0)
		cout << d << c << b << endl;
	else cout << d << c << b << a << endl;
	return 0;
}