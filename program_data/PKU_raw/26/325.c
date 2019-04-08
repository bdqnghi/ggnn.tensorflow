int main ()
{
	char str[100] ;
	int i , j , flag = 0 ;
	cin.getline(str,100) ;
	for ( i = 0 ; ; i++ )
	{
		if ( *(str+i) == ' ' && flag == 1 )
		{
			for ( j = i ; ; j++ )
			{
				*(str+j) = *(str+j+1) ;
				if ( *(str+j) == '\0' ) break ;
			}
			i-- ;
		}
		if ( *(str+i) == ' ' ) flag = 1 ;
		else flag = 0 ;
		if ( *(str+i) == '\0' ) break ;
	}
	cout << str << endl ;
	return 0 ;
}