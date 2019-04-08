void Find( char * );
int main()
{
	int i;
	char str[ 101 ];
	char mark[ 101 ];


	while ( cin.getline( str, 101 ) )
	{
		memset( mark, 0, sizeof( mark ) );
		for ( i = 0; i < strlen( str ); i++ )
		{
			if ( str[ i ] == '(' )
			{
				mark[ i ] = '$';
			}
			if ( str[ i ] == ')' )
			{
				mark[ i ] = '?';
			}
			if ( str[ i ] != '(' && str[ i ] != ')' ) 
			{
				mark[ i ] = ' ';
			}
		}
		Find( mark );
		for ( i = strlen( mark ) - 1; i >= 0; i-- )
			if ( mark[ i ] != ' ' )
			{
				mark[ i + 1 ] = 0;
				break;
			}
		for ( i = 0; i < strlen( mark ); i++ )
			if ( mark[ i ] != ' ' )
			{
				strcpy( mark, mark + i );
				break;
			}
		cout << str << endl << mark << endl;
	}
}

void Find( char mark[] )
{
	int i, j = 0;
	for ( i = 0; i < strlen( mark ); i++ )
	{
		if ( mark[ i ] == '$' )
		{
			for ( j = i + 1; j < strlen( mark ); j++ )
			{
				if ( mark[ j ] == '$' )
				{
					break;
				}
				else
				{
					if ( mark[ j ] == '?' )
					{
						mark[ j ] = ' ';
						mark[ i ] = ' ';
						Find( mark );
						return;
					}
				}
			}
		}
	}
}

