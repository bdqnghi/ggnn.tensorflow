int main()
{
	int a[100000] = { 0 };
	int x , y;
	int num[10000] = { 0 };
	int n, k;
	cin >> n;
	int i = 0;
	int j;
	int count = 0;
	cin >> x >> y;
	do
	{
		a[i] = x;
		num[y] ++;
		i ++;
		cin >> x >> y;
	}while( !(x == 0 && y == 0 ) );
	j = i;
	for( i = 0; i < n; i ++)
	{
		if( num[i] == n - 1 )
		{
			for( k = 0 ; k < j; k ++)
			{
				if( a[k] == i)
					break;
				if( k == j - 1)
				{
					cout << i << endl;
					count++;
				}
			}
		}
	}
	if( count == 0 )
		cout << "NOT FOUND" << endl;
	return 0;
}
