//???2010?12?1?

//??: 1000010586_???

//??; ????

int make( int n );
int main()
{
	int n;
	cin >> n;
	make ( n );
	return 0;
}
int make( int n )
{
	if ( n == 1 )
	{
		cout << "End" << endl;
		return 0;
	}
	else
	{
		if ( n % 2 == 1 )
		{
			cout << n << "*3+1=" << n * 3 + 1 << endl;
			n = n * 3 + 1;
		}
		if ( n % 2 == 0 )
		{	
			cout << n << "/2=" << n / 2 << endl;
			n = n / 2;
		}
		return make( n );
	}
}

