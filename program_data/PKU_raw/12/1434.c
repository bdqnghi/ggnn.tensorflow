
int main()
{
	int number[16];
	int n;
	for( ; ; )
	{
		n = 0;
		cin >> number[0];
		if( number[0] == -1 ) break;
		int i;
		for( i = 1; i < 16; i++ )
		{
			cin >> number[i];
			if( number[i] == 0 ) break;
		}
		for( int j = 0; j < i; j++ )
		{
			for( int k = 0; k < i; k++)
			{
				if( number[k] == 2 * number[j] )
				{
					n++;
					
				}
			}
		}
		cout << n << endl;
	}

	return 0;
}