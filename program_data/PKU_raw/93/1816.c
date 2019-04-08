int main()
{
	int k ;
	cin >> k;
	if( k % 3 == 0 )
	{
		cout << 3;
		if( k % 5 == 0 )
		{
			cout << ' ' << 5;
			if( k % 7 == 0 )
				cout << ' ' << 7;
		}
		else
			if( k % 7 == 0 )
				cout << ' ' << 7;
	}
	else
		if( k % 5 == 0 )
		{
			cout << 5;
			if( k % 7 == 0 )
				cout << ' ' << 7;
		}
		else
			if( k % 7 == 0 )
				cout << 7;
	if( k % 3 != 0 && k % 5 != 0 && k % 7 != 0 )
		cout << 'n';
	return 0;
}