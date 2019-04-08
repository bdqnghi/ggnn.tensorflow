
int main()
{
	int n;
	cin>>n;
	char c[102][102];
	for( int i=0 ; i<102 ; i++ )
	{
		for( int j=0; j<102 ; j++ )
		{
			c[i][j]='#';
		}
	}
	for( int i=1 ; i<=n ; i++ )
	{
		for( int j=1 ; j<=n ; j++ )
		{
			cin>>c[i][j];
		}
	}
	int m;
	cin>>m;
	while( m>1 )
	{
		m--;
		for( int i=1 ; i<=n ; i++ )
		{
			for( int j=1 ; j<=n ; j++ )
			{
				if( c[i][j]=='@' )
				{
					if( c[i-1][j] == '.' )
					{
						c[i-1][j]='$';
					}
					if( c[i+1][j] == '.' )
					{
						c[i+1][j]='$';
					}
					if( c[i][j-1] == '.' )
					{
						c[i][j-1]='$';
					}
					if( c[i][j+1] == '.' )
					{
						c[i][j+1]='$';
					}
				}
			}
		}
		for( int i=1 ; i<=n ; i++ )
		{
			for( int j=1; j<=n ; j++ )
			{
				if( c[i][j]=='$' )
				{
					c[i][j]='@';
				}
			}
		}
	}
	int num=0;
	for( int i=1; i<=n ; i++ )
	{
		for( int j=1 ; j<=n ; j++ )
		{
			if( c[i][j]=='@' )
			{
				num++ ;
			}
		}
	}
	cout<<num<<endl;
}