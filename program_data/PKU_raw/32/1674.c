int main()
{
	int n ;
	cin >> n ;
	for (int k = 1 ; k <= n ; k ++)
	{
		char str1[200], str2[200] ;
	    int num1[200], num2[200] = {0} , num[200] = {0} ;
		cin >> str1 >> str2 ;
		int len1 = strlen(str1) , len2 = strlen(str2) ;
		for (int i = len1 - 1 ; i >= 0 ; i --)
			num1[i] = str1[i] - '0' ;
		for (int i = len1 - 1 , j = len2 - 1 ; j >= 0 ; i -- , j --)
			num2[i] = str2[j] - '0' ;
		for (int i = len1 - 1 ; i >= 0 ; i --)
			if (num1[i] >= num2[i])
				num[i] = num1[i] - num2[i] ;
			else
			{
				num[i] = 10 + num1[i] - num2[i] ;
				for (int a = 1 ; a <= i ; a ++)
				{
					if (num1[i - a] == 0)
					{
						num1[i - a] = 9 ;
						continue ;
					}
					num1[i - a] -- ;
					break ;
				}
			}
			int b = 0 ;
			while (num[b] == 0)
				b ++ ;
			for (  ; b <= len1 - 1 ; b ++)
				cout << num[b] ;
			cout << endl ;
	}
	
	return 0 ;
}