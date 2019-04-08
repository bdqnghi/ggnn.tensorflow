int main ( )
{
	int n,m ;
	cin >> n >> m ;
	int a[101],b[101] ;
	int *p,*q ;
	p = a ;
	q = b ;
	int i ;
	for( i = 0 ; i <= n - 1 ; i++ )
	{
		cin >> *(p+i) ;
		*(q+i) = *(p+i) ;
	}
	for( i = m ; i <= n - 1 ; i++ )
	{
		*(p+i) = *(q+i-m) ;
	}
	for( i = 0 ; i <= m-1 ; i++ )
	{
		*(p+i)=*(q+n-m+i);
	}
	for( i = 0 ; i <= n - 2 ; i++ )
	{
		cout << *(p+i) << " " ;
	}
	cout << *(p+n-1) << endl ;
	return 0 ;
}