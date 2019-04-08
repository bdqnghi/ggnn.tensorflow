int main () {
	char c[101] ;
	cin.getline(c,101) ;
	int i , j , L , k ;
	L = (int)strlen(c) ;
	for ( i = 0 ; ; i ++ ) {
		if ( c[i] == '\0' )
			break ;
		if ( c[i] == ' ' ) {
			for ( j = i ; ; j ++ ) {
				if ( c[j] != ' ' ) {
					for ( k = j ; ; k ++ ) {
						if ( c[k] == '\0' ) {
							c[k-j+1+i] = c[k] ;
							break ;
						}
						c[k-j+i+1] = c[k] ;
					}
					break ;
				}
			}
		}
	}
	cout << c ;
}
