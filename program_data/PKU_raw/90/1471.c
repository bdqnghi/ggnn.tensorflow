
int ways(int,int);
int main()
{
	int m,n,k,t;
	cin>>t;
	while ( t-- )
	{
		cin>>m>>n;
		k=ways(m,n);
		cout<<k<<endl;
	}
	return 0;
}
int ways( int a,int b )
{
	if ( ( a == 0 ) || ( b == 1 ) )
	{
		return 1;
	}
	if ( ( a < 0 ) || ( b <= 0 ) )
	{
		return 0;
	}
	return ( ways( a-b,b ) + ways ( a,b-1 ) );
}