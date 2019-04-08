int main ()
{
	int n;
	int i, j;
	char str1[101] , str2[101] ;
	int num1[101] = {0}, num2 [101] = {0};
	int l1, l2;
	int flag = 0;
	int k = 0;
	cin>> n;
	for (k = 1; k <= n; k++ )
	{
		cin >> str1;
		cin >> str2;
		l1 = strlen ( str1 ), l2 = strlen ( str2 );
		for ( i = 0; i < l1; i++ )
			num1[l1 - i - 1] = str1[i] - '0';

		for ( i = 0; i < l2; i++ )
			num2[l2 - i - 1] = str2[i] - '0';
		for ( i = 0; i < l1; i++ )
		{
			num1[i] = num1[i] - num2[i];
			j = i;
			while ( num1[j] < 0 )
			{
				num1[j]+=10, num1[j+1]--;
				j++;
			}
		}
		for ( i = l1 - 1; i >= 0 ; i-- )
		{
			if ( num1[i] == 0 && flag == 0 )
			{
				continue;
			}
			flag = 1;
			cout << num1[i];
		}
		cout << endl;
		for ( i = 0; i < l1; i++ )
			num1[i] = 0, str1[i] = 0;
		for ( i = 0; i < l2; i++ )
			num2[i] = 0, str2[i] = 0;
		flag = 0;
	}
	return 0;
}