int main ()
{
	char str[100];
	int lenS, i, answer[100], devided[100];
	int left;
	while ( cin >> str )
	{
		lenS = strlen(str);
		if ( lenS == 1 )
		{
			cout << 0 << endl;
			cout << str[0] << endl;
		}
		else if ( lenS == 2 && str[0] == '1' && str[1] < '3' )
		{
			cout << 0 << endl;
			cout << str[0] << str[1] << endl;
		}
		else
		{
			for ( i = 0; i < lenS; i ++ )
				devided[i] = str[i] - '0';
			if ( str[0] == '1' && str[1] < '3' )
			{
				answer[0] = ( devided[0] * 100 + devided[1] * 10 + devided[2] ) / 13;
				left = ( devided[0] * 100 + devided[1] * 10 + devided[2] ) % 13;
				cout << answer[0];
				for ( i = 1; i < lenS - 2; i ++ )
				{
					answer[i] = ( left * 10 + devided[i+2] ) / 13;
					left = ( left * 10 + devided[i+2] ) % 13;
					cout << answer[i];
				}
				cout << endl;
				cout << left << endl;
			}
			else
			{
				left = devided[0];
				for ( i = 0; i < lenS - 1; i ++ )
				{
					answer[i] = ( left * 10 + devided[i+1] ) / 13;
					left = ( left * 10 + devided[i+1] ) % 13;
				}
				if ( answer[0] != 0 )
					cout << answer[0];
				for ( i = 1; i < lenS - 1; i ++ )
					cout << answer[i];
				cout << endl;
				cout << left << endl;
			}
		}
	}
	return 0;
}
	