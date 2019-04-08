//???2010?12?8?

//???1000010586_???

//?????????

int pan( int a[] , int );
int main()
{
	int n , i , j;
	int a[ 10000 ] = {0};
	cin >> n;
	while ( cin >> i >> j )
	{
		if ( i == 0 && j == 0 )
			break;
		a[ j ]++;
	}
	if ( pan( a , n ) != -1 )
		cout << pan( a  , n ) << endl;
	else if ( pan( a , n ) == -1 )
		cout << "NOT FOUND" << endl;
	return 0;
}
int pan( int a[] , int n )
{
	int i;
	for ( i = 0 ; i <= n - 1 ; i++ )
	{
		if ( a[ i ] == n - 1 )
		{
			return i;
			break;
		}
	}
	if ( i == n )
		return -1;
}
