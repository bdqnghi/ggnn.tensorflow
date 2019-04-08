
int an( int,int );
int main()
{   
	int m,n;
	int t,i,j;
	cin >> t;

	if( t>0)
	{
		for( i=0;i<t;i++ )
		{
              cin >> m >> n;
			  cout << an( m,n ) << endl;
		}
	}
	return 0;
}


int an ( int m,int n)
{
	if( ( m==0 )||(n==1) )
		return 1;

	if( m>=n )
		return an(m-n,n)+an(m,n-1);
	else
		return an( m,n-1);
}