
int a[300] , b[300] , c[300] ;

int  main()
{
	int flag = 0 ;

	for ( int i = 0 ; i < 300 ; i ++ ){
		a[i] = b[i] = c[i] = 0 ;
	}

	char arr[300] ;
	int len1 , len2 ;
	cin >> arr ;
	len1 = strlen(arr) ;
	for ( int i = 0 ; i < len1 ; i ++ ){
		a[i] = arr[len1-i-1]-'0' ;
	}
	cin >> arr ;
	len2 = strlen(arr) ;
	for ( int i = 0 ; i < len2 ; i ++ ){
		b[i] = arr[len2-i-1]-'0' ;
	}

	int len = (len1>len2?len1:len2) ;

	for ( int i = 0 ; i < len ; i ++ ){
		c[i] += a[i] + b[i] ;
		if ( c[i] > 9 ){
			c[i+1] ++ ;
			c[i] -= 10 ;
		}
	}

	for ( int i = len ; i >= 0 ; i -- ){
		if ( c[i] != 0 ){
			flag = i ;
			break ;
		}
	}
	for ( int i = flag  ; i >= 0 ; i -- ){
		cout << c[i] ;
	}
	cout << endl ;

	return 0 ;
}