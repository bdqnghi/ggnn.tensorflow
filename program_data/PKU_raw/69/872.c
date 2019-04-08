
int main() {
	int a0[251], b0[251];
	char a[251], b[251];
	cin.getline( a, 251 );
	cin.getline( b, 251 );
	memset( a0, 0, sizeof( a0 ) );
	memset( b0, 0, sizeof( b0 ) );
	for ( int i = 0; i <= strlen( a ) - 1; i ++ ) {
		a0[i] = a[strlen( a ) - 1 - i] - '0';
	}
	for ( int i = 0; i <= strlen( b) - 1; i ++ ) {
		b0[i] = b[strlen( b ) - 1 - i] - '0';
	}
	for ( int i = 0; i <= 249; i ++ ) {
		a0[i + 1] += ( a0[i] + b0[i] ) / 10;
		a0[i] = ( a0[i] + b0[i] ) % 10;
	}
	int j = 0;
	for ( int i = 249; i >= 0; i -- ) {
		if ( a0[i] != 0 ) {
			j = i;
			break;
		}
	}
	for ( int i = j; i >= 0; i -- ) {
		cout << a0[i];
	}
	cout << endl;
	return 0;
}