int main()
{
	int num[105] , N , j , i ;
	cin >> N ;
	//memset( num, 0 , 105) ;
	num[0] = 1 ;
	for ( i = 1; i <= 104 ; i++)
		num[i] = 0;
    for ( i = 1; i <= N ; i++)
	{
		for ( j = 0 ; j <= 104 ; j++)
			num[j] = num[j] * 2;
		for ( j = 0 ; j <= 104 ; j++)		
		{
			if ( num[j] >= 10 )
			{
				num[j + 1] += num[j] / 10 ;
				num[j] = num[j] % 10 ;
			}
		}
	}
	i = 104 ;
	while ( num[i] == 0)
		i-- ;
	for ( ; i >= 0; i--)
		cout << num[i] ;
	return 0 ;
}