//???2010?12?15?

//???1000010586_???

//???2?N??

void Jisuan( char num[] );
int main()
{
	char num[ 50 ] ;
	int N , i;
	for ( i = 0 ; i <= 49 ; i++ )
		num[ i ] = '0';
	num[ 49 ] = '2';
	cin >> N;
	if ( N == 0)
		cout << 1;
	else
	{
	    for ( i = 1 ; i <= N - 1 ; i++ )
		    Jisuan ( num );
	    for ( i = 0 ; i <= 49 ; i++ )
		{
		    if ( num[ i ] != '0' )
			{
			     cout << num[ i ];
			     break;
			}
		}
	    for ( i = i + 1 ; i <= 49 ; i++ )
		    cout << num[ i ];
	}
	return 0;
}
void Jisuan( char num[] )
{
	int i;
	num[ 49 ] = num[ 49 ] + num[ 49 ] - '0';
	for ( i = 49 ; i >= 1 ; i-- )
	{
		if ( num[ i ] > '9' )
		{
			num[ i ] = num[ i ] - 10;
			num[ i - 1 ] = num[ i - 1 ] + num[ i - 1 ] - '0' + 1;
		}
		else 
			num[ i - 1 ] = num[ i - 1 ] + num[ i - 1 ] - '0';
	}
}
	

