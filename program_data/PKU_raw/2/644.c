

int main()
{
	int n ;
	cin >> n ;
	int shu ;
	char ppl[27] ;
	int a[26][n+1] ;
	memset( a , 0 , sizeof( a ) ) ;//???
	for( int i = 0 ; i < n ; i ++ )
	{
		memset( ppl , 0 , sizeof( ppl ) ) ;//????
		cin >> shu ;//????
		getchar() ;//???
		cin.getline( ppl , 27 ,'\n' ) ;//????
		for( int j = 0 ; 'A' <= ppl[j] && ppl[j] <= 'Z' ; j ++  )
		{
			a[ (int) ppl[j] - ( int ) 'A' ][0] ++ ;//0????
			a[ (int) ppl[j] - ( int ) 'A' ][ a[ (int) ppl[j] - ( int ) 'A' ][0] ] = shu ;//??????
		}
	}
	int max = 0 , set = 0 ;//??????
	for( int i = 0 ; i < 26 ; i ++ )
	{
		if( a[i][0] > max )
			{
			max = a[i][0] ;
			set = i ;
			}
	}
	cout << ( char ) ( ( int )'A' + set ) << endl ;//???????
	cout << max << endl ;
	for( int i = 1 ; i <= max ; i ++ )
		cout << a[set][i] << endl ;

	return 0 ;
}