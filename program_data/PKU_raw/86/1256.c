int main()
{
	int n, m, i , j, current, lost;
	cin >> n;
	for( i = 0; i < n; i++)
	{
		cin >> m;
		lost = 0;
		for (j = 0; j < m; ++j)
		{

			cin >> current;
			if ((lost + current) < 60 )
			{
				if( 60 - current - lost > 3)
				lost += 3;
			    else
				lost = 60 - current ;
			}
		}
		cout << 60 - lost << endl;
	}
	return 0;
}
			