int check(int i, int a)
{
	int means = 1; 
	if ( a == 1 )
		return 0; 
	if ( a == 2 )
		return 1; 
	for ( ; i <= (int)sqrt(a); i++ )
	{
		if ( a % i == 0 )
			means += check(i, a/i); 
	}
	return means; 
} 
int main()
{
	int n, i, a; 
	cin >> n; 
	for ( i = 1; i <= n; i++ )
	{
		cin >> a; 
		cout << check(2, a) << endl; 
	}
}