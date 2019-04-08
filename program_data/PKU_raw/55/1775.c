int main() {
	int a, b, ten = 0;
	char str[100], str2[100];
	cin >> a >> str >> b;
	int len = strlen( str );
	for ( int i = 0; str[i] != '\0'; i ++ ) {
		if ( str[i] >= '0' && str[i] <= '9' ) ten += ( str[i] - '0' ) * pow ( ( double ) a, ( double ) ( len - 1 - i ) ) ;
		else if ( str[i] <= 'z' && str[i] >= 'a' ) ten += ( str[i] - 'a' + 10 ) * pow ( ( double ) a, ( double ) ( len - 1 - i ) );
		else ten += ( str[i] - 'A' + 10 ) * pow ( ( double ) a, ( double ) ( len - 1 - i ) );
	}
	int j = 0;
	if ( ten == 0 ) cout << 0;
	else {
		while ( ten != 0 ) {
			if ( ten % b <= 9 ) str2[j ++] = ( char )( ten % b + '0' );
			else str2[j ++] = ( char )( ten % b - 10 + 'A' );
			ten /= b;
		}
		j --;
		for ( int i = j; i >= 0; i -- ) {
			cout << str2[i];
		}
	}
	return 0;
}

	



	


