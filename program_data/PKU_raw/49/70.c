//???2010?11?24?
//???1000010586_???
//???????

int main()
{
	int len , i , j , k , l;
	char word[500];
	cin >> word;
	len = strlen( word );
	for ( i = 1 ; i <= len / 2 ; i ++ )
	{
		for ( j = 0 ; j <= len - i ; j ++ )
		{
			for ( k = 0 ; k <= i - 1 ; k ++ )
			{
				if ( word[j + k] != word[j + 2 * i - 1 - k] )
					break;
			}
			if ( k == i )
			{
				for ( l = 0 ; l <= 2 * i - 1 ; l ++ )
					cout << word[j + l];
				cout << endl;
			}
		}
	}
	return 0;
}