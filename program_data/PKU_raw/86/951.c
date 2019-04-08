//????
//1000062701
//???

int main()
{
	int n;
	cin >> n;
	int a[20] = {0};               //????
	int m, i, j, k;
	int sum = 0;
	for( i = 0; i < n; i++ )
	{
		cin >> m;
		if( m == 0 )               //?????60
			cout << 60 << endl;
		else
		{
		   for( j = 0; j < m; j++ )
		    {
			   cin >> a[j];
	      	}  
		  for( k = m - 1; k >= 0; k-- )
		  {
			  if( ( a[k] + 3 * k ) <= 60 )
			  {
				  if( ( a[k] + 3 * ( k + 1 ) ) > 60 )
				  {
					  sum = a[k];
					  break;                            //??????????
				  }
				  else
				  {
				     sum = 60 - 3 * ( k + 1 );
			         break;
				  }
			  }
		  }

		cout << sum << endl;
		}
	}
	return 0;
}