//******************
//???5         **
//??????    **
//???2013.10.31**
//******************
int main()
{
	int come[2000],leave, num = 1, max, c[2000];

	memset( c, 0, sizeof(c) );

	char ch;

	for ( int i = 0; ; i++ )
	{
		cin >> come[i];

		ch = cin.get();

		if ( ch == '\n' )

			break;

		num++;
	}
	for ( int i = 0; i < num; i++ )
	{
		cin >> leave;

		ch = cin.get();

		for ( int j = come[i]; j < leave; j++ )

			c[j]++;
	}
	max = c[0];

	for ( int i = 0; i < 1003; i++ )

		if ( max < c[i] )

			max = c[i];

	cout << num << " " << max << endl;

	return 0;
}
