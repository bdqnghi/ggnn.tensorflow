
int main()
{
	int n, Speed1[ 1001 ], Speed2[ 1001 ];
	while( cin >> n && n )
	{
		int Answer = 0;
		for( int i = 0; i < n; i ++ )
			cin >> Speed1[ i ];
		for( int i = 0; i < n; i ++ )
			cin >> Speed2[ i ];
		sort( Speed1, Speed1 + n );
		sort( Speed2, Speed2 + n );
		int left1 = 0, right1 = n - 1, left2 = 0, right2 = n - 1;
		while( left1 <= right1 && left2 <= right2 )
		{
			if( Speed1[ left1 ] == Speed2[ left2 ] )
			{
				if( Speed1[ right1 ] > Speed2[ right2 ] )
				{
					Answer ++;
					right1 --;
					right2 --;
				}
				else if( Speed1[ right1 ] < Speed2[ right2 ] )
				{
					Answer --;
					left1 ++;
					right2 --;
				}
				else
				{
					if( Speed1[ left1 ] < Speed2[ right2 ] )
					{
						Answer --;
						left1 ++;
						right2 --;
					}
					else break;
				}
			}
			else if( Speed1[ left1 ] > Speed2[ left2 ] )
			{
				Answer ++;
				left1 ++;
				left2 ++;
			}
			else
			{
				Answer --;
				left1 ++;
				right2 --;
			}
		}
		cout << Answer * 200 << endl;
	}
}
