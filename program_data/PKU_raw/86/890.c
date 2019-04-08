// ????.cpp : Defines the entry point for the console application.
//



int main()
{
	int n = 0;
	int cut[100] = {0};
	int sum[100][100] = {0};
	int num = 0;
	int i = 0;
	int t = 0;
	int time1 = 0;
	int time2 = 0;
	int q = 0;

	cin >> n;

	for( i = 1;i <= n;i++ )
	{
		cin >> cut[i];
		

		if( cut[i] == 0)
			continue;

		else
			for( t = 1;t <= cut[i];t ++ )
			{
				cin >> sum[i][t];
				
			}
	}

	for( i = 1;i <= n;i++ )
	{
		q = cut[i];

		if( cut[i] == 0)
		{
			num = 60;
			cout << num << endl;
		}

		else
			for( t = 1; t <= q;t++ )
			{
				time1 = sum[i][t] + 3 * ( t - 1 );
				time2 = time1 + 3;

				if( t == q && time2 <= 60 ) 
				{
					num = 60 - q * 3;
					cout << num << endl;
				}

				if( time1 <= 60 && time2 > 60 && time2 <= 63 )
				{
					num = sum[i][t];
					cout << num << endl;
					break;
				}

				if( time1 > 60 )
				{
					num = 60 - 3 * ( t - 1 );
					cout << num << endl;
					break;
				}

			}

	}


	return 0;

}
