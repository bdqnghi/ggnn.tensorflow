
void checkstr (char str[] , int) ;

int main ()
{
	char str[500] ;
	int  i = 2 , len ;
	cin >> str ;
	len = strlen(str) ;
	for (i = 2 ; i <= len ; i ++)
	{
	    checkstr(str , i) ;
	}
	return 0 ;
}
void checkstr (char str[] , int i)
{
	int b , e , b1 , b2 , e2 , count = 0 , len ;
	len = strlen(str) ;
	for (b = 0 ; b <= len - i ; b ++)
	{
		b2 = b ;
		e2 = b + i - 1 ;
		for ( b1 = b , e = b + i - 1; b1 < e ; b1 ++ , e --)  
		{
			if (str[b1] == str[e])
				count ++ ;
		}
		if (count == i / 2)
		{
			for (b1 = b2 ; b1 <= e2 - 1; b1 ++)
			{
				cout << str[b1] ;
			}
			cout << str[e2] << endl ;
		}
		count = 0 ;
	}
}



