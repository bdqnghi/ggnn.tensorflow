int main()
{
	int n , k , i , j ;
	char sex[10] ;
	double h ;
	double maleH[40] , femaleH[40] ;
	cin >> n ;
	int numM = 0 ;
	int numF = 0 ;
	for ( k = 0 ; k < n ; k++ )
	{
		cin >> sex ;
		cin >> h ;
		if ( sex[0] == 'm' )
		{
			maleH[numM] = h ;
			numM++ ;
		}
		else if ( sex[0] == 'f' )
		{
			femaleH[numF] = h ;
			numF++ ;
		}
	}
	double t = 0 ;
	for ( i = 0 ; i < numF - 1 ; i++ )
	{
		for ( j = 0 ; j < numF - i - 1 ; j++ )
		{
			if ( femaleH[j] < femaleH[j+1] )
			{
				t = femaleH[j] ;
				femaleH[j] = femaleH[j+1] ;
				femaleH[j+1] = t ;
			}
		}
	}
	for ( i = 0 ; i < numM - 1 ; i++ )
	{
		for ( j = 0 ; j < numM - i - 1 ; j++ )
		{
			if ( maleH[j] > maleH[j+1] )
			{
				t = maleH[j] ;
				maleH[j] = maleH[j+1] ;
				maleH[j+1] = t ;
			}
		}
	}

	for ( i = 0 ; i < numM ; i++ )
	{
		cout << fixed << setprecision(2) << maleH[i] << " " ;
	}
	for ( i = 0 ; i < numF ; i++ )
	{
		if ( i == numF - 1 )
		{
			cout << fixed << setprecision(2) << femaleH[i] ;
		}
		else
		{
			cout << fixed << setprecision(2) << femaleH[i] << " " ;
		}
	}
	return 0 ;
}
