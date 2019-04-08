int main()
{
	int n,a,b,c,d,e,A,B,C,D,E;
	cin >> n;
	if ( n == 10000)
		cout  << "00001" << endl;
	else if ( n >=1000 && n < 10000)
	{
		a = n / 1000;
	    b = n / 100;
		c = n / 10;
		d = n % 10;
		A = d;
		B = c % 10;
		C = b % 10;
		D = a;
		cout<<A<<B<<C<<D<<endl;
	}
	else if ( n >=100 && n <1000 )
	{
		a = n /100;
	    b = n / 10;
		c = n % 10;
		A = c;
		B = b % 10;
		C = a;
		cout<<A<<B<<C<<endl;
	}
	else if ( n >=10 && n < 100 )
	{
		A = n % 10;
		B = n / 10;
		cout<<A<<B<<endl;
	}
	else
		cout<<n<<endl;
}