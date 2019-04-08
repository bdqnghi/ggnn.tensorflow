int main()
{
	int i, n, j=0, l = 0, m=0,t=0, k;
	char str[10000];
	cin >> n;
	cin.get();
	cin.getline(str,10000);
	k = strlen(str);
	for ( i = 0 ; i < k ; i++ )
	{
		t++;
		if ( str[i] != ' ')
			m++;
		else
		{
			if ( t > 81)
			{
				if ( l != 0)
				{
					for ( j = l ; j < i - m - 1 ; j++ )
						cout << str[j];
					l = l + t - m - 1;
					i = i - m - 1;
					cout << endl;
					t=0;
				}
				else
				{
					for ( j = l; j < i - m - 1 ; j++ )
						cout << str[j];
					l = l + t - m - 1;
					i = i - m - 1;
					cout << endl;
					t=0;
				}
			}
			if ( t == 81 )
			{
				if ( l != 0 )
				{
					for ( j = l ; j < i ; j++ )
						cout << str[j];
					l = l + t;
					cout << endl;
					t=0;
				}
				else
				{
					for ( j = l ; j < i ; j++ )
						cout << str[j];
					l = l + t ;
					cout << endl;
					t=0;
				}
			}
			m=0;
		}
	}
	for ( j = l  ; j < k ; j++ )
		cout << str[j];
	return 0;
}