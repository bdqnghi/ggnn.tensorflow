int main()
{
	int m, i ;
	cin >> m ;
	for (i = 3 ; i < ((m / 2) + 1) ; i += 2)
	{
		for (int j = 3 ; j <= m - i ; j += 2)
		{
			if ((i % j == 0)||((m - i) % j == 0))
			{
				if (j != i)
				break ;
			}
			if (j >= (m - i - 2))
			{
				cout << i << " " << m - i << endl ;
				break ;
			}
		}
	}
	
	return 0 ;
}