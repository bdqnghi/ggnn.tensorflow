void mix(int m, int n);  
int main()
{
	int m, n; 
	cin >> m >> n; 
	mix(m, n); 
	return 0; 
}
void mix(int m, int n)
{
	int i, j, a[10000], b[10000], t; 
	for ( i = 1; i <= m; i++ )
		cin >> a[i]; 
	for ( i = 1; i <= n; i++ )
		cin >> b[i]; 
	for ( j = 1; j < m; j++ )
	{
		for ( i = 1; i <= m - j; i++ )
		{
			if ( a[i] > a[i+1] )
			{
				t = a[i]; 
				a[i] = a[i+1]; 
				a[i+1] = t; 
			}
		}
	}
	for ( j = 1; j < n; j++ )
	{
		for ( i = 1; i <= n - j; i++ )
		{
			if ( b[i] > b[i+1] )
			{
				t = b[i]; 
				b[i] = b[i+1]; 
				b[i+1] = t; 
			}
		}
	}
	for ( i = 1; i <= m; i++ )
		cout << a[i] << " ";
	cout << b[1]; 
	for ( i = 2; i <= n; i++ )
		cout << " " << b[i]; 
}