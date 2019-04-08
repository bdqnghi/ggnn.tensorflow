// ????.cpp : ??????????????
//



void out(int);

int main()
{
	int n = 0;

	cin >> n;

	out(n);

	return 0;
}


void out( int n )
{
	if( n == 1)
		cout << "End" << endl;
	else
	{
		if( n % 2 == 0)
		{
			cout << n << "/" << 2 << "=" <<  n / 2 << endl;
			out( n / 2);
		}
		if( n % 2 != 0 )
		{
			cout << n << "*3+1=" <<  3 * n + 1 << endl;
			out( 3 * n + 1);
		}
	}

}
