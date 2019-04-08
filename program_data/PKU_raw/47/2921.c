int main ()
{
	int a[100] , b[100] , n , i;
	cin >> n ;
	for (i = 0 ; i <= n-1 ; i++)
	{
		cin >> a[i] ;
		b[n-i-1] = a[i];
	}
	for (i =0 ; i <= n-2 ; i++)
	{
		cout << b[i] ;
		cout << " " ;
	}
	cout << b[n-1] <<endl ;
    return 0 ;
}
	 