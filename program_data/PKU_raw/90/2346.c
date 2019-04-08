int main()
{
	int sort(int M , int N) ;
	int n , M , N , k ;
	cin >> n ;
	int i = 1 ;
	do
	{
		cin >> M >> N ;
		k = sort(M , N) ;
		cout << k << endl ;
		i++ ;
	}while (i <= n) ;
	return 0 ;
}
int sort(int M , int N)
{
	if (M <= 1 || N == 1)
		return 1 ;
	else
	{
		if (M < N)
			return sort(M , M) ;
		else
			return ( sort(M - N , N) + sort(M , N - 1) ) ;
	}
}