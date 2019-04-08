// ?????.cpp : ??????????????
//



int baifang( int m , int n );
int sum = 0;

int main()
{
	int m = 0;
	int n = 0;

	int t = 0;
	int i = 0;
	cin >> t;

	for( i = 1;i <= t;i++ )
	{
		cin >> m;
		cin >> n;

		cout << baifang( m , n) << endl;
	}

	return 0;
}

int baifang( int m , int n )
{
	if( n == 1)
		return 1;
	if( m == 1)
		return 1;
	if( m == 0 )
		return 1;
	if( m < 0)
		return 0;
	if( n > 1 )
	{
		sum = baifang( m ,n - 1) + baifang( m - n , n );
	}

	return sum;
}


