//
//	?????	?????
//	?????	?2??????????
//	?????	?	? ? ? ?? 1000012733 ?
//	?????	2010 ? 11 ? 19 ?
//
int main()
{
	const int max = 100;
	char str1[max], str2[max];
	int num1[max], num2[max];
	int n, i, j, k1, k2, l, p, q, len1, len2;
	cin >> n;			
	for ( i = 1; i <= n; i ++ )
	{
		cin.get();
		memset ( str1, 0, max );
		memset ( str2, 0, max );
		cin.getline ( str1, max );
		cin.getline ( str2, max );
		len1 = strlen ( str1 );
		len2 = strlen ( str2 );
		memset ( num1, 0, sizeof ( num1 ));
		memset ( num2, 0, sizeof ( num2 ));
		k1 = len1 - 1;
		for ( j = 0; j < len1; j ++ )
		{
			num1[k1] = str1[j] - '0';
			k1 --;
		}
		k2 = len2 - 1;
		for ( j = 0; j < len2; j ++ )
		{
			num2[k2] = str2[j] - '0';
			k2 --;
		}
		for ( l = 0; l < len1; l ++ )
		{
			if ( num1[l] >= num2[l] )
			num1[l] = num1[l] - num2[l];
			else 
			{
				num1[l] = num1[l] - num2[l] + 10;
				num1[l + 1] --;
			}
		}
		p = max - 1;
		while ( num1[p] == 0)
		{
			p --;
		}
		for ( q = p; q > 0; q -- )
		{
			cout << num1[q];
		}
		cout << num1[0] << endl;
	}
	return 0;
}