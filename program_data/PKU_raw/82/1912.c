//*********************
//???6            **
//??????       **
//???2013/10/23   **
//*********************
int main()
{
	int n, a, b, num, leap, max1, max;

	cin >> num;

	max = max1 = 0;

	n = 0;

	for ( int i = 1; i <= num; i++ )
	{
		cin >> a >> b;

	    leap = ( a <= 140 ) && ( a >= 90 ) && ( b <= 90 ) && ( b >= 60 );

		if ( leap )
		{
			n++;

			max = n;
		}
		else
		{	
			if ( max1 > max )
			{
				max = max1;
				
				n = 0;
			}
			else
			{
				n = 0;

				max1 = max;
			}
		}
	}
	if ( max > max1 )

		cout << max << endl;

	else

		cout << max1;

	return 0;
}