int main ()
{
	char a[1000];
	int result[1000], remainder, x[1000] = {0}, k, b[1000], i;
	cin.getline ( a, 999 );
	memset ( result, 0, sizeof ( result ) );
	memset ( b, 0, sizeof ( b ) );
	for ( i = 0; a[i] != '\0'; i++ )
	{
		x[i] = a[i] - '0';
	}
	if ( i == 1 )
	{
		cout << '0' << endl << x[0];
	}
	else if ( i == 2 && ( 10 * x[0] + x[1] < 13 ) )
	{
		cout << '0' << endl << 10 * x[0] + x[1];
	}
	else
	{
		for ( i = 1; a[i] != '\0'; i++ )
		{
			b[i] = ( 10 * x[i - 1] + x[i] ) / 13;
			x[i] = ( 10 * x[i - 1] + x[i] ) % 13;
			k = i;
		}
		remainder = x[k];
		for ( i = k; i >= 1; i-- )
		{
			if ( b[i] < 10 )
			{
				result[i] = b[i];
			}
			else
			{
				result[i] = b[i] % 10;
				result[i - 1] = result[i - 1] + b[i] / 10;
			}
		}
		if ( result[1] != 0 )
			cout << result[1];
		for ( i = 2; i <= k; i++ )
		{
			cout << result[i];
		}
		cout << endl << remainder;
	}
	return 0;
}