/* title:?????? *
 * author:???*
 * time:2011.9.28*/

   


int main()
{
	int n, a, b, c, d;
	cin >> n;
	a = n / 1000;
	b = (n % 1000) / 100;
	c = (n % 100) / 10;
	d = n % 10;
	if(a != 0)
	{
    	cout << d << c << b << a << endl;
	}
	else if (b != 0)
	{
		cout << d << c << b << endl;
	}
	else if (c != 0)
	{
		cout << d << c << endl;
	}
	else 
	{
		cout << d << endl;
	}
    return 0;
}
