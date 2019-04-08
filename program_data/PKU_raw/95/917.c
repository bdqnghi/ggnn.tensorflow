char str1[ 81 ], str2[ 81 ];
int main()
{

cin.getline( str1, 100 );
cin.getline( str2, 100); 
int i;

if ( strlen( str1 ) > strlen( str2 ) )
{
	cout << ">";
}
else if ( strlen( str1 ) < strlen( str2 ) )
	{
		cout << "<";
	}
	else 
	{
		for ( i = 0; i <= strlen( str1 ) - 1; i++ )
		{
			if ( str1[ i ] >= 65 && str1[ i ] <=  90 )
				str1[ i ] = str1[ i ] + 32 ;
			if ( str2[ i ] >= 65 && str2[ i ] <= 90 )
				str2[ i ] = str2[ i ] + 32;
			if ( str1[ i ] > str2[ i ] )
			{
				cout << ">";
				break;
			}
			else
			{
				if ( str1[ i ] < str2[ i ] )
				{
					cout << "<";
					break;
				}
			}
		}
		if ( i == strlen( str1 ) )
			cout << "=";
	}
}
			

