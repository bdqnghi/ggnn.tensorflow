int main()
{
	int x[1000] , y[1000] , total , max ;
	char ch ;
	int i = 0 , j = 0 ;
    do
	{
		cin >> x[i] ;
		ch = cin.get() ;
		i++ ;
	}while(ch == ',') ;
	do
	{
		cin >> y[j] ;
		ch = cin.get() ;
		j++ ;
	}while(ch == ',') ;
	total = i ;
	int z[1000] = {0} ;
	for (int k = 0 ; k < total ; k++)
	{
		for (int q = x[k] ; q < y[k] ; q++)
		{
			z[q]++ ;
		}
	}
	int s = 0 ;
	for (int l = 0 ; l <= 998 ; l++)
	{
		if (z[l] > z[l+1])
		{
			s = z[l+1] ;
			z[l+1] = z[l] ;
			z[l] = s ;
		}
	}
	max = z[999] ;
	cout << total << " " << max ;
	return 0 ;
}