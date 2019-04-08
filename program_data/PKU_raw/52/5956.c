int main()
{
	int *p, n, m, num[100], k = 1, t ;
	cin >> n >> m ;
	for (int i = 0 ; i < n ; i ++)
		cin >> num[i] ;
	while (k <= m)
	{
		p = &num[n - 1] ;
		t = *p ;
		for ( ; p > num ; p --)
		{
			*p = *(p - 1) ;
		}
		*p = t ;
		k ++ ;
	}
	for (p = num ; p < num + n - 1 ; p ++)
		cout << *p << " " ;
	cout << *p ;
	return 0 ;
}