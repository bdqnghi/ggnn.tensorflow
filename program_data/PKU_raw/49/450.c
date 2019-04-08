
void huiwen(char str[500])
{
	int i, j, k, t, x, len, count;
	len = strlen(str);
	for ( j = 2; j < len + 1; j ++ )                                //j???????????
	{
		for ( i = 0; i <= len - j; i ++ )                           //i?????????   
		{
			count = 0;
			for ( k = i, t = i + j - 1; k < t; k ++, t -- )            //k, t???????????????????
			{
				if ( str[k] == str[t] )
					count ++;
			}
			if ( count == j / 2 )
			{
				for ( x = i; x < i + j; x ++ )
					cout << str[x];
				cout << endl;
			}
		}				                        
	}
}


int main ()
{
	char str[500];
	cin >> str;
	huiwen(str);
	return 0; 
}
	







