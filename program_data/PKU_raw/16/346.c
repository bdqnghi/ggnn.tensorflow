int main()
{
	int n, a, b, c, d;
	cin>>n;
	if (n <= 9 && 0 <= n)
		cout<<n;
	if (n <= 99 && 10 <= n)
    {
        a = n % 10;
	    n = n / 10 ;
	    cout<<a;
	    b = n % 10;
	        cout<<b;
	}
	if (n <= 999 && 100 <= n)
	{
        a = n % 10;
	    n = n / 10;
		cout<<a;
	    b = n % 10;
		n = n / 10;
        cout<<b;
	    c = n % 10;
	    cout<<c;
	}
	if (n <= 9999 && 1000 <= n)
	{
        a = n % 10;
	    n = n / 10;
	    cout<<a;
	    b = n % 10;
		n = n / 10;
	    cout<<b;
        c = n % 10;
		n = n / 10;
        cout<<c;
	    d = n % 10;
	    cout<<d;
	}
	if (n == 10000)
	    cout<<"00001";
	return 0;
}