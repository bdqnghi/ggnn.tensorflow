/**
 * ??????
 * ???1000012844
 * ??????????
 **/



int main()
{
	char str[ 101 ];
	
	gets( str );

	char *p = str;
	char *start = NULL, *end = NULL;

	for ( ; p < strlen( str ) + str; p++ )
	{
		if ( *p == ' '&& *( p-1 ) != ' ' )
		{
			start = p;
		}
		if ( *(p - 1 ) == ' ' && *p != ' ' )
		{
			end = p - 1;
		}

		if ( end > start )
		{
			p = start;
			while ( end < str + strlen( str ) )
			{
				*( ( start++ ) + 1 ) = *( ( end++ ) + 1 );
			}
		}
	}

	printf( str );
}