int main()
{
	char words[400][50];
	int n;
	cin >> n;
	int i;
	int counter = 0;
	for( i = 0 ; i <= n - 1 ; i ++ )
		cin >> words[i];
	char (*p)[50];
	for( p = words ; p <= words + n - 2 ; p ++ )
	{
		counter = counter + strlen( * p );
		if( counter < 80 )
		{
			if( counter + 1 + strlen( * ( p + 1 ) ) <= 80 )
			{
				cout << *p << " ";
				counter ++;
			}
			else
			{
				cout << *p << endl;
				counter = 0;
			}
		}
		else if( counter == 80 )
		{
			cout << *p << endl;
			counter = 0;
		}
		else
		{
			cout << endl << *p ;
			counter = strlen( *p );

		}
	}
	counter = counter + strlen( * p );
	if( counter <= 80)
		cout << *p;
	else
		cout << endl << *p;



	return 0;
}
