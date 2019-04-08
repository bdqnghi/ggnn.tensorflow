int main()
{
	int n , len ;
	char word[100];
	cin >> n;
	for ( int i = 0 ; i <= n ; i ++ )
	{
		cin.getline( word , 100000 );
		len = strlen( word );
		for ( int j = 0 ; j <= len - 1 ; j ++ )
		{
			if ( ( word[j] != '_' ) && ( word[j] < 65 || word[j] > 122 || ( word[j] > 90 && word[j] < 97 ) ) && ( word[j] < '0' || word[j] > '9' ) ) 
			{
				cout << 0 << endl;
				break;
			}
			if ( word[0] != '_' && ( word[0] < 65 || word[0] > 122 ) )
			{
				cout << 0 << endl;
				break;
			}
			if ( word[j] == ' ' )
			{
				cout << 0 << endl;
				break;
			}
			if ( j == len - 1 )
				cout << 1 << endl;
		}
	}
	return 0;
}