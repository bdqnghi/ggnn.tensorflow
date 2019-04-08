int main ()
{
	int n = 0, t = 0;						//??n?????k?t
	int num[1000];							//????
	cin >> n;
	cin >> t;
	for ( int i = 0; i < n; i ++ )			//??n??
	{
		cin >> num[i];
	}
	int x = 0;								//??break???
	for ( int j = 0; j < n; j ++ )
	{
		for ( int k = j + 1; k < n; k ++ )
		{
			if ( num[j] + num[k] == t )
			{
				cout << "yes";
				x = x + 1;
				break;
			}
			if ( j == n - 2 && k == n - 1 )
				cout << "no";
		}
		if ( x == 1 ) break;
	}
	return 0;
}