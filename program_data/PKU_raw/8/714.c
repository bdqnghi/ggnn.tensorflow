int main ()
{
	void scan();//??????
	scan();
	return 0;
}
void scan()
{
	int m, n;
	int a[100], b[100];
	cin >> m >> n;//???????????
	for ( int i = 0; i < m; i ++ )//??????
		cin >> a[i];
	for ( int j = 0; j < n; j ++ )
		cin >> b[j];
	void sort ( int x, int c[] );//??????
	sort ( m, a );
	cout << " ";
	sort ( n, b );
}
void sort( int x, int c[] )//???????????????????
{
	for ( int k = 0; k < x - 1; k ++ )
		for ( int l = 0; l < x - k - 1; l ++ )
			if ( c[l] > c[l+1] ) swap ( c[l], c[l+1] );
	for ( int h = 0; h < x - 1; h ++ ) cout << c[h] << " ";
	cout << c[x-1];
}