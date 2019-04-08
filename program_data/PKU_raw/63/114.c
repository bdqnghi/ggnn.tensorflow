// ??5.cpp : Defines the entry point for the console application.
//



int main()
{
	int a[101][101] = {0};
	int b[101][101] = {0};
	int c[101][101] = {0};
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int i = 0;
	int k = 0;
	int t = 0;
	int j = 0;

	cin >> x1;
	cin >> y1;

	for( i = 1;i <= x1;i++ )
		for( t = 1;t <= y1;t++ )
			cin >> a[i][t];

	cin >> x2;
	cin >> y2;

	for( i = 1;i <= x2;i++ )
		for( t = 1;t <= y2;t++ )
			cin >> b[i][t];

	for( i = 1;i <= x1;i++ )
		for( j = 1;j <= y2;j++ )
		{
			for( k = 0;k <= y1;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}

	for( i = 1;i <= x1;i++ )
		for( j = 1;j <= y2;j++ )
		{
			if( j != y2 )
				cout << c[i][j] << " ";
			else
				cout << c[i][j] << endl;
		}


		return 0;
}


