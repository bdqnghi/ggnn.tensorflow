int main ()
{
	int m , i ;
	const int c[13] = {0 , 31 , 0 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;
	cin >> m ;
	for (i = 1 ; i <= m ; i ++)
	{
		//const int c[13] = {0 , 31 , 0 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;
		int year , month1 , month2 , day = 0 , a , b , i ;
		cin >> year >> month1 >> month2 ;
		if (month1 > month2)
		{
			a = month2 ;
			b = month1 ;
		}
		else
		{
			a = month1 ;
			b = month2 ;
		}
		for (i = a ; i < b ; i ++)
		{
			day = day + c[i] ;
		}
		if (a <= 2)
		{
			if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
			    day = day + 29 ;
	        else
		     	day = day + 28 ;
		}
		
		if (day % 7 == 0)
			cout << "YES" << endl ;
		else
			cout << "NO" << endl ;
	}
	return 0 ;
}