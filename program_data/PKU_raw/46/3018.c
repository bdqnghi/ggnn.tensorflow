//******************
//???2         **
//??????    **
//???2013.11.1 **
//******************
int main()
{
	int row, col, num[200][200], a, b, c, c1, x, y;

	cin >> row >> col;

	for ( int i = 1; i <= row; i++ )

		for ( int j = 1; j <= col; j++ )

			cin >> num[i][j];
	
	x = y = 1;

	c1 = 0;

	c = row * col;

	for ( ;x <= row; )
	{
		for ( a = x; a <= col; a++ )
		{			
			if ( c1 == c ) break;
			
			cout << num[x][a] << "\n";

			c1++;
		}
		a--;

		for ( b = y + 1; b <= row; b++ )
		{
			if ( c1 == c ) break;
			
			cout << num[b][a] << "\n";

			c1++;
		}
		b--;

		for ( a--; a >= x; a-- )
		{			
			if ( c1 == c ) break;
			
			cout << num[b][a] << "\n";

			c1++;
		}
		a++;

		b--;

		for ( ; b > y; b-- )
		{
			if ( c1 == c ) break;
			
			cout << num[b][a] << "\n";

			c1++;
		}
		x++;
		
		y++;
		
		row--;
		
		col--;
	}
	return 0;
}