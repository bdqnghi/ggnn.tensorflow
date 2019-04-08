int main()
{
    int n, v, n4, n3, n2, n1;
	double n0;
	cin >> n;
	if (n == 0)
	{
	    cout << 0 << endl;
	}
	else if (n == 10000)
	{
	    cout << 1 << endl;
	}
	else
	{
		n0 = n;
	    v = log10(n0) + 1;
		n4 = n / 1000;
		n3 = (n - n4 * 1000) / 100;
		n2 = (n - n4 * 1000 - n3 * 100) / 10;
		n1 = n - n4 * 1000 - n3 * 100 - n2 * 10;
	    switch (v)
		{
		    case 4: cout << n1 << n2 << n3 << n4 << endl;break;
			case 3: cout << n1 << n2 << n3 << endl;break;
			case 2: cout << n1 << n2 << endl;break;
			case 1: cout << n1 << endl;
		}
	}
	return 0;
}