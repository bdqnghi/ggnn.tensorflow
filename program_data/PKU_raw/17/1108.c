int len;
char str[101];
void f ( int p ) {
	int m = -1 , n = -1;
	for ( int i = p; i >= 0; i -- ) {
		if (*( str + i ) == '(') {
			m = i;
			break;
		}
	}
	for ( int i = m + 1; i <= len - 1; i ++ ) {
		if (*( str + i ) == ')')  {
			n = i;
			break;
		}
	}
	if ( m >= 0 && n >= 0 ) {
	str[m] = '#';
	str[n] = '#';
	}
	if ( m > 0 ) {
		f ( m - 1 );
	}
}

int main() {
	while( cin >> str ) {
	len = strlen( str );
	cout << str << endl;
	f ( len );
	for ( int j = 0;j <= len - 1; j ++ ) {
		if ( str[j] == '(' ) cout << "$";
		else if ( str[j] == ')' ) cout << "?";
		else cout << " ";
	}
	cout <<  endl;
	}
	return 0;
}
