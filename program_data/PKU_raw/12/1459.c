int main()	
{
	while(1)
	{
		int i = 0; int a[20] = {0};
		int sum = 0;
		do
		{
			cin >> a[i];
			i++;
		}
		while( a[ i - 1 ] > 0 );
		if( a[ i - 1 ] == -1 )
			break;
		for( int j = 0; j < i-1 ; j++ )
		{
			for( int k = 0; k < i-1 ; k++ )
				if( a[j] * 2 == a[k] )
					sum++;
		}
		cout << sum << endl;
	}
} 