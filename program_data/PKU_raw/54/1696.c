int n , k , m , g = 0 ;
int main()
{
	void plu(int i) ;
	cin >> n >> k ;
	for (int j = 1 ; g == 0 ; j++)
	{
		m = j * (n-1) ;
		plu(0) ;
	}
	return 0 ;
}
void plu(int i)
{
	if (i == n)
	{
		g = 1 ;
		cout << m ;
		return ;
	}
	if (m % (n-1) != 0)
		return ;
	m = m * n/(n - 1) + k ;
	return plu(i +1) ;
}