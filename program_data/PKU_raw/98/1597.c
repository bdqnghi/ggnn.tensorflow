int main ()
{
	int n ;
	char str[10001][40];
	cin >> n ;cin.get();
	for ( int i = 1 ; i <= n ; i++ )
	{
		cin.getline(str[i],40,' ');
	} 
	int sum = 0 ;
	for ( int i = 1 ;i <= n ; i ++ )
	{
		sum += strlen(str[i]);
		if ( sum <= 80 )
		{
			if ( sum != strlen(str[i]) )
			{				
				cout << " " ;
			}
			else
			{
				sum = sum ;
			}
			for ( int j = 0 ; j < strlen(str[i]); j ++ )
			{
				cout << *(str[i]+j);
			}
			sum ++ ;			
		}
		else
		{
			cout << endl ;
			sum = 0 ;
			i -- ;
		}
	}
	return 0 ;
}