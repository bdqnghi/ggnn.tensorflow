// ??4.cpp : Defines the entry point for the console application.
//


int main()
{
	int n = 0;
	char num[81];
	int i = 0;
	int len = 0;
	int t = 0;
	int m = 0;
	int d[3] = {0};
	int e[80] = {0};
	int k[80] = {0};
	int f[80] = {0};

	cin >> n;
	cin.ignore();

	for( i = 1;i <= n;i++ )
	{
		cin.getline(num,81);

		d[1] = num[0] - 'a';
		d[2] = num[0] - 'A';
		len = strlen(num);

		if( num[0] == '_'
			|| ( d[1] >= 0 && d[1] <= 25)
			|| ( d[2] >= 0 && d[2] <= 25) )
		{
			len = strlen(num);

			if( len == 1 )
			{
				cout << 1 << endl;
				continue;
			}else

		  {
			for( t = 1;t <= len - 1;t++ )
			{
				e[t] = num[t] - 'a';
				k[t] = num[t] - 'A';
				f[t] = num[t] - '0';

			}


			for( t = 1;t <= len - 1;t++ )
			{
				if( ( e[t] >= 0 && e[t] <= 25 )
					|| ( k[t] >= 0 && k[t] <= 25 ) 
					|| (f[t] >= 0 && f[t] <= 9 ) 
					|| num[t] == '_')
					{
						m = 0;
					}
				else
				{
					m = 1;
					break;
				}

			}
		  }

		}

		else
		{
			cout << 0 << endl;
			continue;
		}
		

			if( m == 1 )
				cout << 0 << endl;
			else
				cout << 1 << endl;
		
	}


	return 0;
}
