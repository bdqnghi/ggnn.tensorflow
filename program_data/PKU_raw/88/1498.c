//???2010?12?8?

//???1000010586_???

//???????

int main()
{
	int i;
	char str[ 31 ];
	char *p;
	cin.getline( str , 31 );
	p = str;
	for( ; *p != '\0' ; p++ )
	{
		if ( *p >= '0' && *p <= '9' )
		{
			for ( i = 0 ; *( p + i ) != '\0' ; i++ )
			{
				if ( *( p + i ) < '0' || *( p + i ) > '9' )
				{
					p = p + i;
					cout << endl;
					break;
				}
				cout << *( p + i );
				if ( *( p + i + 1 ) == '\0' )
				{
                    p = p + i;
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}

