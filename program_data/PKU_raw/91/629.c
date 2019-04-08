int main()
{
	char a[105] , b[105] ;
	int n , i , c[105] ; 
	cin.getline(a , 105) ;
	n = strlen(a) ;
	for ( i = 0 ; i <= n - 2 ; i++)
	{
		c[i] = (int)( a[i] + a[i + 1]);
	}
	c[n - 1] = (int)(a[0] + a[n - 1]);
	for ( i = 0 ; i <= n - 1 ; i++)
	{
		b[i] = (char)c[i];
	    cout << b[i];
	}
	return 0;
}