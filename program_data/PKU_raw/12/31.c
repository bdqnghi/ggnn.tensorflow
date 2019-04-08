
void initarray ( int a[] ,int b , int length ); // ?????
void base ( int a[maxlen] ); // ??
int twice ( int a[maxlen]  ); // ????
int main ( void ) // ???
{
	int a[maxlen];
	int t[maxlen];
	int i,j,k,l;
	i = 0;
	for ( i = 0 ; i < maxlen ; i ++ )
	{
		a[i] = -2;
	}
	i = 0;
	k = -2;
	while( a[i] != -1 )
	{
		while ( k != 0 ) 
		{
			cin>>k;
			a[i] = k ; 
			i ++ ;
		}
		base ( a );
		j = twice ( a );
		cout<<j<<endl; 
		initarray ( a , -2 ,maxlen);
		i = 0 ; 
		k = -2 ;
	}
	return 1;
}

void initarray (int a[] ,int b , int length)
{
	int i;
	for ( i = 0 ; i < length ; i++)
	{
		a[i] = b;
	}
}

void base ( int a[maxlen] )
{
	int b[maxinputint+1];
	int i,j;
	initarray(b,0,maxinputint); 
	for ( i = 0 ; i<maxlen; i ++ )
	{
		if ( a[i] > 0 )
		{
			b[a[i]]++;
		}
	}
	j = 0;
	for ( i = 0 ; i<= maxinputint; i ++ )
	{
		if ( b[i] == 1 )
		{
			a[j] = i;
			j++ ; 
		}
	}
}

int twice ( int a[maxlen] )
{
	int i,j,t,result;
	
	i = 0;
	j = 0;
	t = 0;
	result = 0;
	while ( ( a[i] <= 50 ) && ( a[j] > 0 ))
	{
		t = a[i] * 2;
		j = i ; 
		while ( (a[j] <= t) && ( a[j] > 0 ) ) 
		{
			if ( a[j] == t )
			{
				result ++ ;
			};
			j++ ; 
		}
		j = 0;
		i ++ ;
	}
	return result;
}