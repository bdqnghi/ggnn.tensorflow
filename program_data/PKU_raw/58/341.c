int main()
{
	int n , i , flag[100] , j , len ;
	char c[81] ;
	cin >> n ;
	cin.get();
	for (i = 0 ; i < n ; i++)
	{	
		cin.getline(c,81) ;
		len = strlen(c) ;
		if (c[0] == '_' || (c[0] >= 'A' && c[0] <= 'Z') || (c[0] >= 'a' && c[0] <= 'z'))
		{	for (j = 1 ; j < len ; j++)
				if (c[j] != '_' && (c[j] < 'A' || (c[j] > 'Z' && c[j] < 'a') || c[j] > 'z') && ( c[j] < '0' || c[j] > '9'))
				{	flag[i] = 0 ;
					break ;
				}
			if ( j == len)	flag[i] = 1 ;
		}
		else flag[i] = 0 ;
		memset(c , 0 , sizeof(c)) ;
	}
	for (i = 0 ; i < n ; i++)
		cout << flag[i] << endl ;
	return 0 ;
}
