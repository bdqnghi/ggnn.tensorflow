int main ()
{
	int m = 0, n = 0;					//m?????????n
	cin >> m;
	for ( int i = 0; i < m; i ++ )
	{
		cin >> n;
		double add = 2, x = 2, y = 1;	//??????????
		for ( int j = 1; j < n; j ++ )
		{
			x = x + y;
			y = x - y;
			add = add + x / y;
		}
		printf ("%.3f", add );
		cout << endl;
	}
	return 0;
}