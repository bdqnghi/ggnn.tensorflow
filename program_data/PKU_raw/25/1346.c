
int main()
{
	int n;
	cin >> n;
	int x[100] = {1};
	for( int i = 1; i <= n; i++ )
	{
		for( int j = 0; j < 100; j++ )
		{
			x[j] = 2 * x[j];
		}
		for( int j = 0; j < 100; j++ )
		{
			if( x[j] >= 10 )
			{
				x[j] -= 10;
				x[j+1]++;
			}
		}
	}
	int j;
	for( j = 99; j >= 0; j-- )
	{
		if( x[j] != 0 )
			break;
	}
	for( ; j >=0; j-- )
	{
		cout << x[j];
	}
	cout << endl;

	return 0;
}