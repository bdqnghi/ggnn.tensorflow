int main()
{
	int m=0, n=0, l=10, t, i, j, k;
	char str[200];
	cin.getline(str,200);
	k = strlen(str);
	for ( i = 0 ; i < k ; i++ )
	{
		if ( str[i] != ' ' )
			m++;
		else
		{
			if ( m > n)
			{
				n=m;
				t=i;
			}
			m = 0;
		}
	}
	m = 0;
	for ( j = k - 1 ; j >=0 ; j--)
	{
		if( str[j] != ' ')
			m++;
		else
			break;
	}
	if ( m > n )
	{
		n = m;
		t = k;
	}
	for ( i = t-n ; i < t ; i++ )
		cout << str[i] ;
	cout << endl;
	m = 0;
	for ( i = 0 ; i < k ; i++ )
	{
		if( str[i] != ' ' ) 
			m++;
		else
		{
			if (( m < l) && ( m != 0 ))
			{
				l=m;
				t=i;
			}
			m=0;
		}
	}
	if ( m < l )
	{
		for ( j = k - m ; j < k ;  j++ )
			cout << str[j];
	}
	else
	{
		for ( i = t-l; i < t ; i++ )
			cout << str[i] ;
	}
	return 0;
}
