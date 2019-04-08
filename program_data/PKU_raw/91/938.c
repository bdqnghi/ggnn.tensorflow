
int  main()
{
	char s[101], a[101], *p, *q ;
	int n, i ;
	cin.getline(s , 101) ;
	n = strlen(s) ;
	p = s ;
	q = a ;
	for (p, q ; p < a+n-1 , q < a+n-1 ; p++ , q++)
	{
		*q = *p + *(p+1) ;
	}
	*(q) = *p + s[0] ;
	for ( i = 0 ; i < n ; i++)
	{
		cout << a[i] ;
	}
	cout << endl ;
	
	return 0 ;
}

