//???2010?12?8?

//???1000010586_???

//??????????

int main()
{
	int i = 0 , j , len;
	char word[ 100 ] , str[ 100 ];
	char *p , *q;
	cin.getline( word , 100 );
	p = word;
	for ( ; *p != '\0' ; p++ )
	{
		if ( *p == ' ' && *( p - 1 ) == ' ' )
			continue;
		str[ i ] = *p;
		i++;
	}
	str[ i ] = '\0';
	q = str;
	cout << q << endl;
	return 0;
}
		