int main ()
{
	char str[1000] ;
	int count = 0 , i , j = 0 , a[1000] , k = 0 , m ;
	cin >> str ;
	//cout << "(" << (char)'A + '
	for (i = 0 , j = 0 ; str[i] != '\0' ; i ++ , j ++)
	{
		if (str[i] >= 97&&str[i] <= 122)
		{
			a[j] = str[i] - 'a' ;
		}
	    if (str[i] >= 65&&str[i] <= 90)
		{
			a[j] = str[i] - 'A' ;
		}
	}
	cout << "(" << (char)('A' + a[0]) << "," ;
	for (k = 1 ; k < j ; k ++)
	{
		if (a[k] == a[k - 1])
			count ++ ;
		else
		{
			cout << count + 1 << ")" ;
			count = 0 ;
			cout << "(" <<(char) ('A' + a[k]) << "," ;
		}
	}
	//count = 0 ;
	//for (m = j ; a[m] != a[j] ; m --)
	//{
	//	count ++ ;
	//}
	cout << count + 1 << ")" << endl ;
	return 0 ;
}
